#include <unistd.h>

// ex05/ft_print_comb.c : Allowed functions: write
// displays all different combinations of three different digits in ascending order, listed by ascending order
void ft_print_comb(void);

void ft_print_comb(void){
    char tmp[5];
    tmp[4] = ' ';
    for (int i = 0; i < 8; i++) {
        tmp[0] = 48 + i;
        tmp[3] = i == 7 ? ' ' : ',';
        for (int j = i + 1; j < 9; j++) {
            tmp[1] = 48 + j;
            for (int k = j + 1; k < 10; k++) {
                tmp[2] = 48 + k;
                write(1, tmp, 5);
            }
        }
    }
}

int main() {
    write(1, "piscine 0\n5 ", 12);
    ft_print_comb();
}