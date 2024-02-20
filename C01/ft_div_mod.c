#include <unistd.h>
#include <stdio.h>

// ex03/ft_div_mod.c : Allowed functions: none
// divides parameters a by b and stores the result in the int pointed by div
// it also stores the remainder of the division of a by b in the int pointed by mod
void ft_div_mod(int a, int b, int *div, int *mod);

void ft_div_mod(int a, int b, int *div, int *mod) {
    *div = a / b;
    *mod = a % b;
}


int main() {
    write(1, "piscine 1 - 3\n", 14);
    int num_a = 7;
    int num_b = 77;
    int num_div, num_mod;
    int *div = &num_div;
    int *mod = &num_mod;
    ft_div_mod(num_a, num_b, div, mod);
    printf("Dividendo %d  divisor %d  quociente %d  resto %d", num_a, num_b, num_div, num_mod);
}