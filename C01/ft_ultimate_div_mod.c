#include <unistd.h>
#include <stdio.h>

// ex04/ft_ultimate_div_mod.c : Allowed functions: none
// divides parameters a by b. The result of this division is stored in the int pointed by a
// the remainder of the division is stored in the int pointed by b
void ft_ultimate_div_mod(int *a, int *b);

void ft_ultimate_div_mod(int *a, int *b){
    int l_a = *a;
    int l_b = *b;
    *a = l_a / l_b;
    *b = l_a % l_b;
}

int main() {
    write(1, "piscine 1 - 4\n", 14);    
    int num_a = 45;
    int num_b = 13;
    int *a = &num_a;
    int *b = &num_b;
    printf("Dividendo %d  divisor %d \n", num_a, num_b);
    ft_ultimate_div_mod(a, b);
    printf("  Quociente %d  resto %d", num_a, num_b);
}