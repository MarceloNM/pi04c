#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

// ex01/ft_strlcpy.c : Allowed functions: none
// reproduce the behavior of the function strlcpy
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

// função criada em C01
int ft_strlen(char *str){
    int len = 0;
    while (*(str++) != '\0') {
        len++;
    }
    return len;
}


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
    char *d = dest;
    unsigned int j = 0;
    while (j++ < size - 1 && *src != '\0') {
        *d++ = *src++;
    }
    for (; j < size; j++) *d++ = '\0';
    return --j;
}


int main() {
    write(1, "piscine 1 -10\n\n", 14);
    char origem[] = "abcdefghi jklmnop qrst";
    unsigned int len = ft_strlen(origem) + 1;
    char destino[len];
    printf("a %s\n ", origem);
    printf("\nlen %d", ft_strlcpy(destino, origem, len));
    printf("\nc %s len %d", destino, ft_strlen(destino));
}
