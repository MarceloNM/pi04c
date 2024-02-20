#include <unistd.h>

// ex07/ft_putnbr.c : Allowed functions: write
// displays the number entered as a parameter. 
// the function has to be able to display all possible values within an int type variable
void ft_putnbr(int nb);

void ft_putnbr(int nb) {
    char tmp[14];        // -1,234,567,890 - 14 posições possíveis
    for (int i = 0; i < 14; i++) {
        tmp[i] = 0;
    }
    if (nb < 0) {
        tmp[0] = '-';
        nb = nb * -1;
    }
    int i = 13;
    tmp[i] = 48;
    while (nb){
        tmp[i--] = 48 + nb % 10;
        nb = nb /10;
    }
    write(1, tmp, 14);
}

int main() {
    write(1, "piscine 0 - 7\n", 15);
    ft_putnbr(-0000);
}