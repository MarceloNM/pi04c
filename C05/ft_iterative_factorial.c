#include <unistd.h>
#include <stdio.h>


// ex00/ft_iterative_factorial.c : Allowed functions: none
// create an iterated function that returns a number. This number is the result of a
// factorial operation based on the number given as a parameter
// if the argument is not valid the function should return 0
// overflows must not be handled, the function return will be undefined

int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb) {
    int res = 1;   // fatorial de 0 ou 1 é 1
    int limite = 19;   // o enunciado diz que é para deixar 'estourar', mas vou limitar
    if (nb >= 0 && nb <= limite ) {
        while (nb > 1){
            res *= nb--;
        }
    } else res = 0;
    return res;
}

int main() {
    write(1, "piscine 5 - 0\n", 14);
    
    int n = 19;

    int n_fact = ft_iterative_factorial(n);
    printf("\nn_fact de %d = %d", n, n_fact);

}