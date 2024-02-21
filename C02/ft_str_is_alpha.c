#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

// ex02/ft_str_is_alpha.c : Allowed functions: none
// returns 1 if the string given as a parameter contains only 
// alphabetical characters, and 0 if it contains any other character
// it should return 1 if str is empty
int ft_str_is_alpha(char *str);

// não inclui carateres acentuados e çÇ
int ft_str_is_alpha(char *str) {
    int is_alpha = 1;
    while (is_alpha && *str != '\0') {
        if ((*str > 64 && *str < 91) || (*str > 96 && *str < 123)) {
            *str++;
        } else is_alpha = 0;
    }
    return is_alpha;
}


int main() {
    write(1, "piscine 1 - 2\n\n", 14);
    char origem[] = "jksdfgsdjkg";
    printf("\n%s ", ft_str_is_alpha(origem) ? "é alfa": "não é alfa");
}