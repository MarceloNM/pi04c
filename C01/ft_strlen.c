#include <unistd.h>
#include <stdio.h>

// ex06/ft_strlen.c : Allowed functions: none
// counts and returns the number of characters in a string
int ft_strlen(char *str);

int ft_strlen(char *str){
    int len = 0;
    while (*(str++) != 0) {
        len++;
    }
    return len;
}

int main() {
    write(1, "piscine 1 - 6\n", 14);
    char str[] = "abcdefgh ijklm"; 
    int len = ft_strlen(str);
    printf("Comprimento da string '%s': %d", str, len);
}