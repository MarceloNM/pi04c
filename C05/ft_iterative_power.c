#include <unistd.h>
#include <stdio.h>


// ex02/ft_iterative_power.c : Allowed functions: none
// create an iterated function that returns the value of a power applied to a number
// a power lower than 0 returns 0
// overflows must not be handled
// we’ve decided that 0 power 0 will returns 1

int ft_iterative_power(int nb, int power);

int ft_iterative_power(int nb, int power) {
    int res = 1;
    if (power < 0) return 0;
    for (int i = 0; i < power; i++) {
        res *= nb;
    }
    return res;
}

int main() {
    write(1, "piscine 5 - 2\n", 14);
    
    int n = -2;
    int p = 3;

    int n_fact = ft_iterative_power(n, p);
    printf("\n %d elevado a %d = %d", n, p, n_fact);

}