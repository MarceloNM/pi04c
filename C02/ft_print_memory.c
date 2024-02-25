#include <stdio.h>
#include <unistd.h>

// função criada em C01
int ft_strlen(char *str){
    int len = 0;
    while (*(str++) != '\0') {
        len++;
    }
    return len;
}

// função criada em C02
int ft_str_is_printable(char *str) {
    int is_printable = 1;
    while (is_printable && *str != '\0') {
        if ((*str > 31 && *str < 128)) {
            *str++;
        } else is_printable = 0;
    }
    return is_printable;
}

void *ft_print_memory(void *addr, unsigned int size) {
    char hexa[] = "0123456789abcdef";
    int linha_len = 76;     // 16 + 1 + 1 + 8 * 5 + 16 + 1 + 1; // comprimento da linha a escrever
    char *str = addr;       // para retirar por não ser necessário?
    unsigned long long n, m = (unsigned long int) &addr;   // endereço da string  
    char linha[linha_len];    
    char ch[2];
    ch[1] = '\0';
    for (int k = 0; k < linha_len; k ++) {
        *(linha+k) = ' ';
    }
    *(linha+16) = ':';
    *(linha+74) = '\n';
    *(linha+75) = '\0';
    int pos_addr = 0;              // contador de carateres do buffer
    int c_linha = 58;              // contador de carateres na linha de escrita
    int h_linha = 18;           // contador para colocação de hexadecimais na linha
    int h_linha_aux = 0;        // contador auxiliar para saltar um espaço a cada 4 hexadecimais
    while (pos_addr < size) {      // enquanto houver carateres para processar 
        n = m + pos_addr;          // n tem o endereço da posição atual da string
        char ch[2];
        ch[0] = *str;
        *(linha + c_linha) = ft_str_is_printable(ch) ? *str : '.';
        *(linha + h_linha) = hexa[ch[0] / 16];
        *(linha + h_linha + 1) = hexa[ch[0] % 16];
        if (!(pos_addr % 16)) {      // em 0, 15, 31, 47, 63, ... atualiza o endereço hexadecimal 
            int resto;
            for (int i = 0; i < 16; i++) {   
                resto = n % 16;
                n = n / 16;
                *(linha+15-i) = hexa[resto];
            }
        }
        if (pos_addr % 16 == 15 || pos_addr == size - 1 ){ 
            write(1, linha, linha_len);       // escreve a linha qunado acaba de ser preenchida
            h_linha = 16;
            h_linha_aux = -1;
            c_linha = 57;                     // reinicia a posição de escrita dos carateres        
            for (int k = 0; k < linha_len; k ++) {   // preenche o array com espaços
                *(linha+k) = ' ';
            }
            *(linha+16) = ':';
            *(linha+74) = '\n';
            *(linha+75) = '\0';
        }
        c_linha++;
        h_linha_aux++;
        if (h_linha_aux == 2) {
            h_linha_aux = 0;
            h_linha++;
        }
        h_linha += 2;
        str++;
        pos_addr++;                // passa ao carater seguinte
    }
}
    

int main()
{
    char origem[] = "Bonjour les aminches\t\n\tc\a est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0"; // 91 carateres
    // unsigned long int m = 140725952625904;
    unsigned int size = ft_strlen(origem);
    void *addr = origem; 
//    write(1, addr, 91);

    ft_print_memory(addr, size);
    return 0;
}
