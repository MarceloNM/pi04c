#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

// ex02/ft_strupcase.c : Allowed functions: none
// transforms every letter to uppercase
char *ft_strupcase(char *str);

char *ft_strupcase(char *str){
    char *s = str;
    while (*s != '\0') {
        if (*s > 95 && *s < 123) *s -= 32; 
        s++;
    }
    return str;
}


int main() {
    write(1, "piscine 1 - 7\n\n", 14);
    char origem[] = "abcdefghi987jklmn?opqrs-tuvwxyz";
    printf("\n%s ", ft_strupcase(origem));
}