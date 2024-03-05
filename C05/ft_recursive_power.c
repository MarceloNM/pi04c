#include <unistd.h>
#include <stdio.h>


// ex03/ft_recursive_power.c : Allowed functions: none
// create a recursive function that returns the value of a power applied to a number.
// a power lower than 0 returns 0
// overflows must not be handled, the function return will be undefined
// we’ve decided that 0 power 0 will returns 1

int ft_recursive_power(int nb, int power);

int ft_recursive_power(int nb, int power) {
    
    if (power < 0) return 0;
    if (power < 1) return 1;
    else return nb * ft_recursive_power(nb, --power);
}

int main() {
    write(1, "piscine 5 - 3\n", 14);
    
    int n = -2;
    int p = 9;

    int n_fact = ft_recursive_power(n, p);
    printf("\n %d elevado a %d = %d", n, p, n_fact);

}