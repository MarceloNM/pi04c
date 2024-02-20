#include <unistd.h>

// ex03/ft_print_numbers.c : Allowed functions: write
// displays all digits, on a single line, by ascending order
void ft_print_numbers(void);

void ft_print_numbers(void){
    int qtNumeros = 10;      // 10 algarismos
    char numeros[qtNumeros];
    
    for (int i = 0; i < qtNumeros; i++){
        numeros[i] = 48 + i;  // 48 é o código ASCII d0 '0'
    }
    write(1, numeros, qtNumeros);
} 

int main()
{
    write(1, "piscine 0\n3 ", 12);
    ft_print_numbers();
}