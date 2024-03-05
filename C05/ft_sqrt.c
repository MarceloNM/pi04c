#include <unistd.h>
#include <stdio.h>


// ex05/ft_sqrt.c : Allowed functions: none
// create a function that returns the square root of a number (if it exists), or 0 if the
// square root is an irrational number.

int ft_sqrt(int nb);

int ft_sqrt(int nb) {
    if (nb <= 0) return 0;
    for (int i = 1; i < nb; i++ ) {
        if (i * i == nb) return i; 
        if (i * i > nb ) return 0;
    }
}

int main() {
    write(1, "piscine 5 - 5\n", 14);
    
    for (int nb = 0; nb < 300; nb++) {

        int n = ft_sqrt(nb);
        if (n > 0 )
        printf("%d raiz inteira %d || ", nb , n);
    }

}