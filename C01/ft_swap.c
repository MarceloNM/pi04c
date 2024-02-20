#include <unistd.h>
#include <stdio.h>

// ex02/ft_swap.c : Allowed functions: none
// swaps the value of two integers whose addresses are entered as parameters
void ft_swap(int *a, int *b);

void ft_swap(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    write(1, "piscine 1 - 2\n", 14);
    int num_a = 7;
    int num_b = 77;
    int *a = &num_a;
    int *b = &num_b;
    printf("Número a %d  número b %d \n", num_a, num_b);
    ft_swap(a, b);
    printf("Número a %d  número b %d", num_a, num_b);
}