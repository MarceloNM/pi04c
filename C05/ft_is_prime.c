#include <unistd.h>
#include <stdio.h>


// ex06/ft_is_prime.c : Allowed functions: none
// create a function that returns 1 if the number given as a parameter is a prime
// number, and 0 if it isn’t

int ft_is_prime(int nb);

int ft_is_prime(int nb) {
    if (nb == 1 || nb == 2) return 1;
    if (nb <= 0 || (nb % 2) == 0) return 0;
    for (int i = 3; i < nb/2; i += 2 ) {
        if ((nb % i) == 0) return 0; 
    }
    return 1;
}

int main() {
    write(1, "piscine 5 - 6\n", 14);
    
    for (int nb = 0; nb < 300; nb++) {

        int n = ft_is_prime(nb);
        if (n > 0 )
        printf("%d || ", nb);
    }

}