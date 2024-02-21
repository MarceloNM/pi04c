#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

// ex02/ft_str_is_alpha.c : Allowed functions: none
// returns 1 if the string given as a parameter contains only
// digits, and 0 if it contains any other character
// it should return 1 if str is empty
int ft_str_is_numeric(char *str);

// não identifica números reais nem complexos 
int ft_str_is_numeric_n(char *str) {
    int is_num = 1;
    if (*str == '-') *str++;
    while (is_num && *str != '\0') {
        if ((*str > 47 && *str < 58)) {
            *str++;
        } else is_num = 0;
    }
    return is_num;
}

// não identifica números negativos, nem reais, nem complexos 
int ft_str_is_numeric(char *str) {
    int is_num = 1;
    while (is_num && *str != '\0') {
        if ((*str > 47 && *str < 58)) {
            *str++;
        } else is_num = 0;
    }
    return is_num;
}


int main() {
    write(1, "piscine 1 - 3\n\n", 14);
    char origem[] = "-2345";
    printf("\na '%s' %s ", origem, ft_str_is_numeric(origem) ? "é num": "não é num");
    printf("\nb '%s' %s ", origem, ft_str_is_numeric_n(origem) ? "é num": "não é num");
}