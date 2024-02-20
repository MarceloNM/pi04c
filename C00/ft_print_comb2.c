#include <unistd.h>

// ex06/ft_print_comb2.c : Allowed functions: write
// displays all different combination of two two digits numbers (XX XX) between 00 and 99, listed by ascending order
void ft_print_comb2(void);

void ft_print_comb2(void){
    char tmp[7];
    tmp[2] = ' ';
    tmp[6] = ' ';
    for (int i = 0; i < 100; i++) {
        tmp[0] = 48 + i/10;
        tmp[1] = 48 + i%10;
        tmp[5] = i == 98 ? ' ' : ',';
        for (int j = i + 1; j < 100; j++) {
            if ( j != i ){
                tmp[3] = 48 + j/10;
                tmp[4] = 48 + j%10;
                write(1, tmp, 7);
            }
        }
    }
}

int main() {
    write(1, "piscine 0 - 06\n", 15);
    ft_print_comb2();
}