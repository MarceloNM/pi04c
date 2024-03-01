#include <unistd.h>
#include <stdio.h>

// ex04/ft_putnbr_base.c : Allowed functions: write
// displays a number in a base system in the terminal
// this number is given in the shape of an int, and the radix in the shape of a string of characters
// the base-system contains all useable symbols to display that number 
// - 0123456789 is the commonly used base system to represent decimal numbers
// - 01 is a binary base system
// - 0123456789ABCDEF an hexadecimal base system
// - poneyvif is an octal base system
// the function must handle negative numbers
// if there’s an invalid argument, nothing should be displayed. Examples of invalid arguments
// - base is empty or size of 1
// - base contains the same character twice
// - base contains + or -

void ft_putnbr_base(int nbr, char *base);

void ft_putnbr_base(int nbr, char *base) {
    int len = 0;
    char *b = base;
    char *bz;
    char snumber[] = "                          ";
    int good_base = 1;
    while (*b++ != 0 && good_base) {
        bz = b;
        while (*bz++ != 0) {
            if (*bz == *b || *bz == 32 || *bz == 43 || *bz == 45 ) good_base = 0;
        }
        len++;
    }
    good_base *= len;
    if (good_base > 1) {
    //    printf("1. comprimento da string: %d e good_base: %d ", len, good_base);
        int pos = 0;
        if (nbr < 0) {
            write(1, "-", 1);    // número negativo 
            nbr *= -1;
        }
        if (nbr == 0) write(1, base, 1);
        else {
            while (nbr > 0) {
                snumber[pos] = *(base + nbr % len);
                nbr = nbr / len;
                pos++;
            }
            for(int i = --pos; i >= 0; i--){
                write(1, &snumber[i], 1);
            }
        }
    } else {
    //    printf("\n2. comprimento da string: %d e not good_base: %d ", len, good_base);
    }
}

int main() {
    write(1, "piscine 4 - 4\n", 14);
    int number = -123456;
    char base[] = "poneyvif";
    // char base[] = "01";

    ft_putnbr_base(number, base);
}