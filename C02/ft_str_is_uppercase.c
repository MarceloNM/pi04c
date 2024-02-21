#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

// ex02/ft_str_is_uppercase.c : Allowed functions: none
// eturns 1 if the string given as a parameter contains only
// uppercase alphabetical characters, and 0 if it contains any other character
// it should return 1 if str is empty
int ft_str_is_uppercase(char *str);

int ft_str_is_uppercase(char *str) {
    int is_upper = 1;
    while (is_upper && *str != '\0') {
        if ((*str > 64 && *str < 91)) {
            *str++;
        } else is_upper = 0;
    }
    return is_upper;
}


int main() {
    write(1, "piscine 1 - 5\n\n", 14);
    char origem[] = "PIEUTYIERYa";
    printf("\n'%s' %s ", origem, ft_str_is_uppercase(origem) ? "é uppercase": "não é uppercase");
}