#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

// ex01/ft_strncpy.c : Allowed functions: write
// reproduce the behavior of the function strncpy
char *ft_strncpy(char *dest, char *src, unsigned int n);

// função criada em C01
int ft_strlen(char *str){
    int len = 0;
    while (*(str++) != 0) {
        len++;
    }
    return len;
}


char *ft_strncpy(char *dest, char *src, unsigned int n){
    char *d = dest;
    int j = 0;
    while (*src != '\0' && j++ < n) {
        *d++ = *src++;
    }
    for (; j < n; j++) *d++ = '\0';
    return dest;
}


int main() {
    write(1, "piscine 1 - 1\n\n", 14);
    char origem[] = "abcdefghi jklmnop qrst";
    unsigned int len = ft_strlen(origem) + 1;
    char destino[len];
    printf("a %s\n ", origem);
    printf("\nb %s", ft_strncpy(destino, origem, len));
    printf("\nc %s len %d", destino, ft_strlen(destino));
}
