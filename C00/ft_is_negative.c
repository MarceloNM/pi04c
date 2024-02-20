#include <unistd.h>

// ex04/ft_is_negative.c : Allowed functions: write
// displays ’N’ or ’P’ depending on the integer’s sign entered as a parameter
void ft_is_negative(int n);

void ft_is_negative(int n) {
    char res;
    
    res = n < 0 ? 'N' : 'P';
    
    write(1, &res, 1);
}

int main()
{
    write(1, "piscine 0\n4 ", 12);
    ft_is_negative(-2);
}