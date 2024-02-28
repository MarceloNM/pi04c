#include <unistd.h>
#include <stdio.h>

// ex03/ft_atoi.c : Allowed functions: none
// converts the initial portion of the string pointed by str to its int representation
// the string can start with an arbitray amount of white space (as determined by isspace(3))
// the string can be followed by an arbitrary amount of + and - signs, - sign will change
// the sign of the int returned based on the number of - is odd or even
// finally the string can be followed by any numbers of the base 10
// function should read the string until the string stop following the rules and return
// the number found until now
// you should not take care of overflow or underflow. result can be undefined in that case
// example: " ---+--+1234ab567"   ->   -1234
int ft_atoi(char *str);

int ft_atoi(char *str) {
    int i = 0;
    char *snum = str;
    int sinal = 1;
    int juntando = 1;
    int e_numero = 0;
    while ( *str != 0 && juntando) {
        if ((*str < 48 || *str > 57) && *str != 32 && *str != 43 && *str != 45  ) {
            juntando = 0;
        } else {
            if (*str == 45) sinal *= -1;
            else if (*str > 47 && *str < 58) {
                if (!e_numero) snum = str;   // aponta para o primeiro algarismo 
                e_numero++;                   // mais um algarismo
            }
            *str++;
        }
    }
    while (e_numero-- ) {
        int p = 1;
        for (int j = 0; j < e_numero; j++) {
            p *= 10;
        }
        i += p * (*snum - 48);
        *snum++;
    }
    return i * sinal;
}

int main() {
    write(1, "piscine 4 - 3\n", 14);
    char string0[] = " -- -+- -+43212349 ab567";
//    char string0[] = "-1234";

    printf("string0 %s \n", string0);
    int result = ft_atoi(string0);
    printf("\nresult = %d", result);

}