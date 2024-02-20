#include <unistd.h>
#include <stdio.h>

// ex05/ft_putstr.c : Allowed functions: write
// displays a string of characters on the standard output
void ft_putstr(char *str);

void ft_putstr(char *str){
    char x = *str;
    while (x != 0){
        write(1, &x, 1);
        x = *(++str);
    } 
}

int main() {
    write(1, "piscine 1 - 5\n", 14);
    char str[] = "abcdefgh ijklm"; 
    ft_putstr(str);
    printf("\na string é '%s'", str);
}