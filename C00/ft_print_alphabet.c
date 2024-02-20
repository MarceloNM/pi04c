#include <unistd.h>

// ex01/ft_print_alphabet.c : Allowed functions: write
// displays the alphabet in lowercase, on a single line, by ascending order, starting from the letter ’a’
void ft_print_alphabet(void);


void ft_print_alphabet(void){
    int alfaLen = 26;    // 26 letras
    char alfabeto[alfaLen];
    
    for (int i = 0; i < alfaLen; i++){
        alfabeto[i] = 97 + i;   // 97 é o código ASCII do 'a'
    }
    write(1, alfabeto, alfaLen);
}


int main()
{
    write(1, "piscine 0\n1 ", 12);
    ft_print_alphabet();
}