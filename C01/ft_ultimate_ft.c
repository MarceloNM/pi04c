#include <unistd.h>
#include <stdio.h>

// ex01/ft_ultimate_ft.c : Allowed functions: none
// takes a pointer to pointer to pointer to pointer to pointer to pointer to pointer 
// to pointer to pointer to int as a parameter and sets the value "42" to that int
void ft_ultimate_ft(int *********nbr);

void ft_ultimate_ft(int *********nbr){
    *********nbr = 42;
}

int main() {
    write(1, "piscine 1 - 1\n", 14);
    int numero;
    int * nbr0 = &numero;  // nbr é um apontador com o endereço da variável numero
    int ** nbr9 = &nbr0;
    int *** nbr8 = &nbr9;
    int **** nbr7 = &nbr8;
    int ***** nbr6 = &nbr7;
    int ****** nbr5 = &nbr6;
    int ******* nbr4 = &nbr5;
    int ******** nbr3 = &nbr4;
    int ********* nbr1 = &nbr3;
    ft_ultimate_ft(nbr1);
    printf("Número %d", numero);
}