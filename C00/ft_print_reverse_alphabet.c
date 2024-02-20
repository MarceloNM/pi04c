
#include <unistd.h>

// ex02/ft_print_reverse_alphabet.c : Allowed functions: write
// displays the alphabet in lowercase, on a single line, by descending order, starting from the letter ’z’
void ft_print_reverse_alphabet(void);

void ft_print_reverse_alphabet(void){
    int alfaLen = 26;       // 26 letras
    char alfabeto[alfaLen];
    
    for (int i = 0; i < alfaLen; i++){
        alfabeto[i] = 122 - i;   // 122 é o código ASCII do 'z'
    }
    write(1, alfabeto, alfaLen);
}

int main()
{
    write(1, "piscine 0\n2 ", 12);
    ft_print_reverse_alphabet();
}