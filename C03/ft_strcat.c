#include <unistd.h>
#include <stdio.h>

// ex03/ft_strcat.c : Allowed functions: none
// Reproduce de behavior of the function strcat
char *ft_strcat(char *dest, char *src);

char *ft_strcat(char *dest, char *src) {
    char *d = dest;
    while ( *d != 0) {
        *d++; 
    } 
    while (*src != 0) {
        *d++ = *src++;
    }
    *d = 0;
    return dest;
}

int main() {
    write(1, "piscine 1 - 2\n", 14);
    char origem[] = "u";
    char destino[30] = "abcdefg hijklmn opqrst";
    printf("Destino: %s origem: %s", destino, origem);
    printf("\nConcatenadas: %s", ft_strcat(destino, origem));
}