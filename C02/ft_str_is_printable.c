#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

// ex02/ft_str_is_printable.c : Allowed functions: none
// returns 1 if the string given as a parameter contains only
// printable characters, and 0 if it contains any other character
// it should return 1 if str is empty
int ft_str_is_printable(char *str);

int ft_str_is_printable(char *str) {
    int is_printable = 1;
    while (is_printable && *str != '\0') {
        if ((*str > 31 && *str < 128)) {
            *str++;
        } else is_printable = 0;
    }
    return is_printable;
}


int main() {
    write(1, "piscine 1 - 6\n\n", 14);
    char origem[] = "PIEUTYI\\ERYa";
    printf("\n'%s' %s ", origem, ft_str_is_printable(origem) ? "é printable": "não é printable");
}