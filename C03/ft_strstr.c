#include <unistd.h>
#include <stdio.h>

// ex04/ft_strstr.c : Allowed functions: none
// Reproduce de behavior of the function strstr
char *ft_strstr(char *str, char *to_find);

char *ft_strstr(char *str, char *to_find) {
    char *s = str;      // cópia do ponteiro para o início da string (não necessário)
    char *u = str;      // outra cópia do ponteiro para o início da string ()
    char *t = to_find;  // cópia do ponteiro para a sting a encontrar - agora já sei que o RL sabe 
    char *find = NULL;  // ponteiro com valor NULL
    unsigned int i = 0; 
    while (*s != 0 && find == 0) {
        u = s++;
        while (*t != 0 && *t==*u){
            if (i == 0) {
                find = u;
            }
            *t++;
            *u++;
            i++;
        }
        if (*t != 0 || i == 0){
            i = 0;
            find = 0;
        }
        t = to_find;
    } 
    return find;
}

int main() {
    write(1, "piscine 1 - 4\n", 14);
    char str[] = "abcdefghijklmnopqmnrstuvwxyz 1234567890 +-_&%$# %()[]{}";
    char to_find[] = "mn";
    printf("Encontrar: %s em: %s", to_find, str);
    printf("\nEncontrada: %s", ft_strstr(str, to_find) == 0 ? "não" : "sim");
    printf("\nEm: %s\n", ft_strstr(str, to_find));
}