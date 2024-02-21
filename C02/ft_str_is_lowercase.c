#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

// ex02/ft_str_is_lowercase.c : Allowed functions: none
// returns 1 if the string given as a parameter contains only
// lowercase alphabetical characters, and 0 if it contains any other character
// it should return 1 if str is empty
int ft_str_is_lowercase(char *str);

int ft_str_is_lowercase(char *str) {
    int is_low = 1;
    while (is_low && *str != '\0') {
        if ((*str > 96 && *str < 123)) {
            *str++;
        } else is_low = 0;
    }
    return is_low;
}


int main() {
    write(1, "piscine 1 - 4\n\n", 14);
    char origem[] = "abcdefH";
    printf("\n'%s' %s ", origem, ft_str_is_lowercase(origem) ? "é lowercase": "não é lowercase");
}