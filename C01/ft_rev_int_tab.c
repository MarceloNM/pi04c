#include <unistd.h>
#include <stdio.h>

// ex07/ft_rev_int_tab.c : Allowed functions: none
// reverses a given array of integer (first goes last, etc) 
// arguments are a pointer to int and the number of ints in the array.
void ft_rev_int_tab(int *tab, int size);

void ft_rev_int_tab(int *tab, int size){
    int aux;
    for (int i = 0; i < (size / 2); i++){
        aux = *(tab + i);
        *(tab + i) = *(tab + size - i - 1);
        *(tab + size - i - 1 ) = aux;
    }
}

int main() {
    write(1, "piscine 1 - 7\n", 14);
    int size = 10;
    int tab[] = { 70, 90, 30, 50, 20, 60, 80, 10, 50, 40 };
    for (int i = 0; i < size; i++) printf("%d ", tab[i]);
    printf("\n");
    ft_rev_int_tab(tab, size);
    for (int i = 0; i < size; i++) printf("%d ", tab[i]); 
}