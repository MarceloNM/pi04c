#include <unistd.h>

// ex00/ft_putchar.c : Allowed functions: write
// displays the character passed as a parameter
void ft_putchar(char c);
// write(1, &c, 1);


void ft_putchar(char c){
    write(1, &c, 1);
}

int main()
{
    write(1, "piscine 0\n0 ", 12);
    ft_putchar('x');
}