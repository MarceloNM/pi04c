#include <unistd.h>
#include <stdio.h>

// ex03/ft_strcat.c : Allowed functions: none
// Reproduce de behavior of the function strncat
char *ft_strncat(char *dest, char *src, unsigned int nb);

char *ft_strncat(char *dest, char *src, unsigned int nb) {
    char *d = dest;
    unsigned int i = 0;
    while ( *d != 0) {
        *d++; 
    } 
    while (*src != 0 && i < nb) {
        *d++ = *src++;
        i++;
    }
    *d = 0;
    return dest;
}

int main() {
    write(1, "piscine 1 - 3\n", 14);
    unsigned int nb = 10;
    char origem[] = " def ";
    char destino[30] = "abc";
    printf("Destino: %s origem: %s", destino, origem);
    printf("\nConcatenadas: %s", ft_strncat(destino, origem, nb));
}

