#include <unistd.h>
#include <stdio.h>

// ex00/ft_strcpy.c : Allowed functions: none
// Reproduce de behavior of the function strcpy
char *ft_strcpy(char *dest, char *src);

char *ft_strcpy(char *dest, char *src){
    char *d = dest;
    while ( *src != 0) {
        *d++ = *src++; 
    } 
    *d = 0;
    return dest;
}

int main() {
    write(1, "piscine 2 - 0\n", 14);
    char origem[] = "abcdefg hijkl";
    char destino[20];
    printf("Original %s  cópia %s", origem, ft_strcpy(destino, origem));
    //ft_strcpy(destino, origem);
    printf("\nOriginal %s  cópia %s", origem, destino);
}