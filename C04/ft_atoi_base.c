#include <unistd.h>
#include <stdio.h>


// ex05/ft_atoi_base.c : Allowed functions: none
// converts the initial portion of the string pointed by str to int representation
// str is in a specific base given as a second parameter
// excepted the base rule, the function should work exactly like ft_atoi
// If there’s an invalid argument, the function should return 0. Examples of invalid arguments
// - base is empty or size of 1
// - base contains the same character twice
// - base contains + or - or whitespaces

int ft_atoi_base(char *str, char *base);

// devolve o comprimento da base - 0 se a base não for válida
int base_len(char *base) {
    int len = 0;
    int good_base = 1;
    char *bz;
    while (*base++ != '\0' && good_base > 0) {
        bz = base;
        while (*bz++ != '\0') {
            if (*bz == *base || *bz == 9 || *bz == 32 || *bz == 43 || *bz == 45 ) good_base = 0;
        }
        len++;
    }
    return len * good_base;
}

// devolve 1 se a letra pertencer à string (base) 0 se não pertencer
int pertence_base(char letra, char *base) {
    int e = 0;
    char *b = base;
    write(1, &letra, 1);
    while (*b != '\0' && e < 1) {
        if (*b++ == letra) e = 1;
    }
    return e;
}

// Calcula base elevada ao expoente (x^y ou x**y) 
int fpotencia(int base, int expoente) {
    int p = 1;
    for (int j = 0; j < expoente; j++) {
        p *= base;
    }
    return p;
}

int ft_atoi_base(char *str, char *base) {
    int i = 0;      // valor a devolver
    int sinal;      // sinal a devolver
    int juntando;   // estado de construção da string válida
    int enumero;    // acumulador da quantidade de dígitos válidos
    int len;        // comprimento da base
    int valor;      // valor posicional do dígito válido
    int potencia;   // valor da potência posicional
    char *snum;     // apontador para o primeiro digito válido
    char *bz;       // auxiliar para movimentação na string base
    len = base_len(base);
    if (len > 1) {   // mínimo base 2
        sinal = 1;   // em princípio o número é positivo
        juntando = 1;   // em princípio vai haver dígitos válidos
        enumero = 0;    // mas nesta altura ainda não há nenhum
        while ( juntando > 0 && *str != '\0') {     // corre a string toda a menos que mude o estado de juntando
            if (*str == 9 || *str == 32 || *str == 43 || *str == 45) {  // sinais aceitáveis tab, ' ', '+' e '-'
                if (*str == 45) { sinal *= -1; }     // um sinal menos muda o sinal do número
                *str++;                             // posição seguinte da string
            } else {   // ver se o caráter pertence à base
                if (pertence_base(*str, base) > 0){     // é um digito válido na base
                    if (enumero < 1) { snum = str; }  // encontrado o primeiro símbolo numérico
                    enumero += 1;                       // incrementa o número de digitos do número
                    *str++;                             // posição seguinte da string
                } else {            // não é um digito válido na base
                    juntando = 0;   // abando o modo de juntar algarismos
                }
            }    
        }
        while (enumero-- > 0 ) {                  // enquanto houver digitos
            bz = base;                              // bz posiciiona-se no início da base
            potencia = fpotencia(len, enumero);     // calcula a potência posicional na base
            valor = 0;
            while (*snum != *bz++) {                // obtem o valor posicional do dígito
                valor++; 
            }
            i += potencia * valor;                  // acumula valor posicional obtido
            *snum++;                                // passa ao digito válido seguinte
        }
    }
    return i * sinal;                               // devolve o valor com o sinal correto
}

int main() {
    write(1, "piscine 4 - 5\n", 14);
    // char string0[] = "-432123049 ab567";
    // char string0[] = " -    - -+- -+43212349 ab567";
    // char base[] = "0123456789";
    // char string0[] = "-101010101010bnm";
    // char base[] = "01";
    // char string0[] = "-ABC1DEFuiui";
    // char base[] = "0123456789ABCDEF";
    // char string0[] = "--+34235";
    // char base[] = "01234567";
    char string0[] = "--+bbbaccba";
    char base[] = "abc";
    
//    char string0[] = "-1234";

    printf("string0 %s \n", string0);
    int result = ft_atoi_base(string0, base);
    printf("\nresult = %d", result);

}