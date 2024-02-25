#include <unistd.h>
#include <stdio.h>

// ex02/ft_putstr=non_printable.c : Allowed functions: write
// isplays a string of characters onscreen. If this string con-
// tains characters that aren’t printable, they’ll have to be displayed 
// in the shape of hexadecimals (lowercase), preceeded by a "backslash"
//  Coucou\ntu vas bien ?    ->    Coucou\0atu vas bien ?  
void ft_putstr_non_printable(char *str);

void ft_putstr_non_printable(char *str){
    char x = *str;
    while (x != 0){
        if (x > 0 && x < 32) {
            write(1, "\\", 1);
            char y = x / 16 + 48;
            char z = x % 16;
            z = z > 9 ? z + 87 : z + 48;
            write(1, &y, 1);
            write(1, &z, 1);
        } else write(1, &x, 1);;
        x = *(++str);
    } 
}

int main() {
    write(1, "piscine 1 -11\n", 14);
    char str[] = "a\bb\tc\ed\ae\ff\ng\rh\v ij\tklm"; 
    ft_putstr_non_printable(str);
    printf("\na string é '%s'", str);
}