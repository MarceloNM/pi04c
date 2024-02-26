#include <unistd.h>
#include <stdio.h>

// ex04/ft_strstr.c : Allowed functions: none
// Reproduce de behavior of the function strstr
char *ft_strstr(char *str, char *to_find);

char *ft_strstr(char *str, char *to_find) {
    char *s = str;
    char *u = str;
    char *t = to_find;
    char *find = 0;
    unsigned int i = 0;
    while (*s != 0 && find == 0) {
        u = s++;
        write(1, u, 1);
        while (*t != 0 && *t==*u){
            write(1, u, 1);
            if (i == 0) {
                find = u;
            }
            *t++;
            *u++;
            i++;
        }
        if (*t != 0 || i == 0){
            i = 0;
            *find = 0;
        }
        t = to_find;
    } 
    return find;
}

int main() {
    write(1, "piscine 1 - 4\n", 14);
    char str[] = "abcdefghijklm ";
    char to_find[] = "adef";
    printf("Encontrar: %s em: %s", to_find, str);
    printf("\nEncontrada: %s", ft_strstr(str, to_find) == 0 ? "não" : "sim");
}
