#include <unistd.h>
#include <stdio.h>

// ex08/ft_sort_int_tab.c : Allowed functions: none
// sorts an array of integers by ascending order
// arguments are a pointer to int and the number of ints in the array
void ft_sort_int_tab(int *tab, int size);

void ft_sort_int_tab(int *tab, int size){
    int aux;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if ( *(tab + i) > *(tab + j)) {
                aux = *(tab + i);
                *(tab + i) = *(tab + j);
                *(tab + j) = aux;
            }
        }
    }
}

int main() {
    write(1, "piscine 1 - 8\n", 14);
    int size = 10;
    int tab[] = { 70, 90, 30, 50, 20, 60, 80, 10, 50, 40 };
    for (int i = 0; i < size; i++) printf(" %d ", tab[i]);
    ft_sort_int_tab(tab, size);
    printf("\n");
    for (int i = 0; i < size; i++) printf(" %d ", tab[i]);
}