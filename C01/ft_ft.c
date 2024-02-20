#include <unistd.h>
#include <stdio.h>

// ex00/ft_ft.c : Allowed functions: none
// takes a pointer to int as a parameter, and sets the value "42" to that int
void ft_ft(int *nbr);

void ft_ft(int *nbr){
    *nbr = 42;
}

int main()
{
    write(1, "piscine 1 - 0\n", 14);
    int numero;
    int * nbr0 = &numero;  // nbr é um apontador com o endereço da variável numero
    ft_ft(nbr0);
    printf("Número %d", numero);
}

