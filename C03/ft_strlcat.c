#include <unistd.h>
#include <stdio.h>

// ex05/ft_strlcat.c : Allowed functions: none
// Reproduce de behavior of the function strlcat
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    char *d = dest;
    unsigned int i = 0;
    while ( *d != 0) {
        *d++;
        i++;
    } 
    while (*src != 0 && i < size - 1) {
        *d++ = *src++;
        i++;
    }
    *d = 0;
    return i;
}

int main() {
    write(1, "piscine 1 - 5\n", 14);
    unsigned int nb = 11;
    char origem[] = "|bdefa|";
    char destino[30] = "babcc";
    printf("Destino: %s origem: %s", destino, origem);
    
    printf("\nConcatenadas (len = %d): %s", ft_strlcat(destino, origem, nb), destino);
}

