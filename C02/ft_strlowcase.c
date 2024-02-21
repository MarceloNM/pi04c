#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

// ex02/ft_strlowcase.c : Allowed functions: none
// transforms every letter to lowercase
char *ft_strlowcase(char *str);

char *ft_strlowcase(char *str){
    char *s = str;
    while (*s != '\0') {
        if (*s > 64 && *s < 92) *s += 32; 
        s++;
    }
    return str;
}


int main() {
    write(1, "piscine 1 - 8\n\n", 14);
    char origem[] = "Abcdefghi987jklmn?opqrs-tuvwxyzZ";
    printf("\n%s ", ft_strlowcase(origem));
}