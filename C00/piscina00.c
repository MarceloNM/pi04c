#include <unistd.h>
#include <fcntl.h>


// using namespace std::basic_ostream;


// ex00/ft_putchar.c : Allowed functions: write
// displays the character passed as a parameter
void ft_putchar(char c);
// write(1, &c, 1);


// ex01/ft_print_alphabet.c : Allowed functions: write
// displays the alphabet in lowercase, on a single line, by ascending order, starting from the letter ’a’
void ft_print_alphabet(void);


// ex02/ft_print_reverse_alphabet.c : Allowed functions: write
// displays the alphabet in lowercase, on a single line, by descending order, starting from the letter ’z’
void ft_print_reverse_alphabet(void);


// ex03/ft_print_numbers.c : Allowed functions: write
// displays all digits, on a single line, by ascending order
void ft_print_numbers(void);


// ex04/ft_is_negative.c : Allowed functions: write
// displays ’N’ or ’P’ depending on the integer’s sign entered as a parameter
void ft_is_negative(int n);


// ex05/ft_print_comb.c : Allowed functions: write
// displays all different combinations of three different digits in ascending order, listed by ascending order
void ft_print_comb(void);


// ex06/ft_print_comb2.c : Allowed functions: write
// displays all different combination of two two digits numbers (XX XX) between 00 and 99, listed by ascending order
void ft_print_comb2(void);


// ex07/ft_putnbr.c : Allowed functions: write
// displays the number entered as a parameter. 
// the function has to be able to display all possible values within an int type variable
void ft_putnbr(int nb);


// ex08/ft_print_combn.c : Allowed functions: write
// displays all different combinations of n numbers by ascending order
// n will be so that : 0 < n < 10.
void ft_print_combn(int n);


void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_alphabet(void){
    int alfaLen = 26;    // 26 letras
    char alfabeto[alfaLen];
    
    for (int i = 0; i < alfaLen; i++){
        alfabeto[i] = 97 + i;   // 97 é o código ASCII do 'a'
    }
    write(1, alfabeto, alfaLen);
}

void ft_print_reverse_alphabet(void){
    int alfaLen = 26;       // 26 letras
    char alfabeto[alfaLen];
    
    for (int i = 0; i < alfaLen; i++){
        alfabeto[i] = 122 - i;   // 122 é o código ASCII do 'z'
    }
    write(1, alfabeto, alfaLen);
}

void ft_print_numbers(void){
    int qtNumeros = 10;      // 10 algarismos
    char numeros[qtNumeros];
    
    for (int i = 0; i < qtNumeros; i++){
        numeros[i] = 48 + i;  // 48 é o código ASCII d0 '0'
    }
    write(1, numeros, qtNumeros);
} 

void ft_is_negative(int n) {
    char res;
    
    res = n < 0 ? 'N' : 'P';
    
    write(1, &res, 1);
}

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
    while (nb){
        tmp[i--] = 48 + nb % 10;
        nb = nb /10;
    }
    write(1, tmp, 14);
}


void ft_print_combn(int n){
    char tmpi[n];   // primeiro elemento da combinatória
    char tmpf[n];   // último elemento da combinatória
    char comma = ',';
    for (int i = 0; i < n; i++ ) {
        tmpi[i] = i + 48;          // 0, 1, 2, ..., n 
    }
    write(1, tmpi, n);
    for (int i = 0; i < n; i++){
        tmpf[i] = 10 - n + i + 48;
    }
    write(1, &comma, 1);
    int continuar = 1;
    int pos = n - 1;      // posição no array entre 0 e n 
    int a = n - 1;        // valor a testar
    while ( continuar ) {   
        if ( tmpi[pos] < tmpf[pos] ) {
            tmpi[pos]++;
            if (pos < n - 1){
                a = tmpi[pos]++;
                for (int i = pos; i < n; i++){
                    tmpi[i] = a++;
                }
                pos = n - 1;
            }
            write(1, tmpi, n);
            write(1, &comma, 1);
        } else {
            pos--;
            if (pos < 0) {
                continuar = 0;
            }
        }
    }
}



int main()
{
    write(1, "piscine 0\n0 ", 12);
    ft_putchar('x');
    write(1, "\n1 ", 3);
    ft_print_alphabet();
    write(1, "\n2 ", 3);
    ft_print_reverse_alphabet();
    write(1, "\n3 ", 3);
    ft_print_numbers();
    write(1, "\n4 ", 3);
    ft_is_negative(-2);
    write(1, "\n5 ", 3);
    int t;
    ft_print_comb();
    write(1, "\n6 ", 3);
    ft_print_comb2();
    write(1, "\n7 ", 3);
    ft_putnbr(-232983982);
    write(1, "\n8 ", 3);
    ft_print_combn(7); 
    write(1, "\nend", 4);

}
