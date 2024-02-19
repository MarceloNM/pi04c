//  piscina1Teste modifica algumas funções para verificar resultados

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdint.h>


// ex00/ft_ft.c : Allowed functions: none
// takes a pointer to int as a parameter, and sets the value "42" to that int
void ft_ft(int *nbr);


// ex01/ft_ultimate_ft.c : Allowed functions: none
// takes a pointer to pointer to pointer to pointer to pointer to pointer to pointer 
// to pointer to pointer to int as a parameter and sets the value "42" to that int
void ft_ultimate_ft(int *********nbr);


// ex02/ft_swap.c : Allowed functions: none
// swaps the value of two integers whose addresses are entered as parameters
void ft_swap(int *a, int *b);


// ex03/ft_div_mod.c : Allowed functions: none
// divides parameters a by b and stores the result in the int pointed by div
// it also stores the remainder of the division of a by b in the int pointed by mod
void ft_div_mod(int a, int b, int *div, int *mod);


// ex04/ft_ultimate_div_mod.c : Allowed functions: none
// divides parameters a by b. The result of this division is stored in the int pointed by a
// the remainder of the division is stored in the int pointed by b
void ft_ultimate_div_mod(int *a, int *b);


// ex05/ft_putstr.c : Allowed functions: write
// displays a string of characters on the standard output
void ft_putstr(char *str);


// ex06/ft_strlen.c : Allowed functions: none
// counts and returns the number of characters in a string
int ft_strlen(char *str);


// ex07/ft_rev_int_tab.c : Allowed functions: none
// reverses a given array of integer (first goes last, etc) 
// arguments are a pointer to int and the number of ints in the array.
void ft_rev_int_tab(int *tab, int size);


// ex08/ft_sort_int_tab.c : Allowed functions: none
// sorts an array of integers by ascending order
// arguments are a pointer to int and the number of ints in the array
void ft_sort_int_tab(int *tab, int size);


void ft_ft(int *nbr){
    *nbr = 42;
}


void ft_ultimate_ft(int *********nbr){
    *********nbr = 43;   
}

void ft_swap(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void ft_div_mod(int a, int b, int *divv, int *mod){
    *divv = a / b;
    *mod = a % b;
}

void ft_ultimate_div_mod(int *a, int *b){
    int l_a = *a;
    int l_b = *b;
    *a = l_a / l_b;
    *b = l_a % l_b;
}


void ft_putstr(char *str){
    char x = *str;
    while (x != 0){
        write(1, &x, 1);
        x = *(++str);
        // x++;
    } 
}


int ft_strlen(char *str){
    int len = 0;
    while (*(str++) != 0) {
        len++;
    }
    return len;
}


void ft_rev_int_tab(int *tab, int size){
    int aux;
    for (int i = 0; i < (size / 2); i++){
        aux = *(tab + i);
        *(tab + i) = *(tab + size - i - 1);
        *(tab + size - i - 1 ) = aux;
    }
}


void ft_sort_int_tab(int *tab, int size){
    int aux;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if ( *(tab + i) > *(tab + j)) {
                aux = * (tab + i);
                * (tab + i) = *(tab + j);
                * (tab + j) = aux;
            }
        }
    }
}


int main()
{
    write(1, "piscine 1\n0 ", 12);
    int numero;
    int * nbr0 = &numero;  // nbr é um apontador com o endereço da variável numero
    ft_ft(nbr0);
    printf("Número %d \n\n1 ", numero);
//    write(1, "\n1 ", 3);
    int ** nbr9 = &nbr0;
    int *** nbr8 = &nbr9;
    int **** nbr7 = &nbr8;
    int ***** nbr6 = &nbr7;
    int ****** nbr5 = &nbr6;
    int ******* nbr4 = &nbr5;
    int ******** nbr3 = &nbr4;
    int ********* nbr1 = &nbr3;
    ft_ultimate_ft(nbr1);
    printf("Número %d \n\n2 ", numero);

//    write(1, "\n2 ", 3);
    int num_a = 7;
    int num_b = 77;
    int *a = &num_a;
    int *b = &num_b;
    printf("Número a %d  número b %d \n ", num_a, num_b);
    ft_swap(a, b);
    printf("Número a %d  número b %d \n\n3 ", num_a, num_b);
    
//    write(1, "\n3 ", 3);
    int num_div, num_mod;
    int *divv = &num_div;
    int *mod = &num_mod;

    ft_div_mod(num_a, num_b, divv, mod);
    
    printf("Dividendo %d  divisor %d  quociente %d  resto %d \n\n4 ", num_a, num_b, num_div, num_mod);
    
//    write(1, "\n4 ", 3);
    num_a = 45;
    num_b = 13;
    printf("Dividendo %d  divisor %d \n", num_a, num_b);
    ft_ultimate_div_mod(a, b);
    printf("  Quociente %d  resto %d \n5\n ", num_a, num_b);

//    write(1, "\n5 ", 3);
    char str[] = "abcdefgh ijklm"; 
    ft_putstr(str);
    printf("\na string é '%s' \n\n6 ", str);
    
//    write(1, "\n6 ", 3);
    int len = ft_strlen(str);

    printf("Comprimento da string '%s': %d \n\n7 ", str, len);

//    write(1, "\n7 ", 3);
    int size = 10;
    int tab[] = { 70, 90, 30, 50, 20, 60, 80, 10, 50, 40 };
    ft_rev_int_tab(tab, size);
    for (int i = 0; i < size; i++){
        printf(" Array pos [%d] = %d\n ", i, tab[i]);
    }
    printf("\n8 ");
//    write(1, "\n8 ", 3);
    ft_sort_int_tab(tab, size);
    for (int i = 0; i < size; i++){
        printf(" Array pos [%d] = %d\n ", i, tab[i]);
    }
//    write(1, "\nend", 4);

}







