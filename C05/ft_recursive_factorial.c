#include <unistd.h>
#include <stdio.h>


// ex01/ft_recursive_factorial.c : Allowed functions: none
// Create a recursive function that returns the factorial of the number given as a parameter
// if the argument is not valid the function should return 0
// overflows must not be handled, the function return will be undefined

int ft_recursive_factorial(int nb);

int ft_recursive_factorial(int nb) {
    if (nb < 0) return 0;
    if (nb < 2) return 1;
    return nb * ft_recursive_factorial(nb-1); 
}

int main() {
    write(1, "piscine 5 - 1\n", 14);
    
    int n = 20;

    int n_fact = ft_recursive_factorial(n);
    printf("\nn_fact de %d = %d", n, n_fact);

}