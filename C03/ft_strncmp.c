#include <unistd.h>
#include <stdio.h>

// ex01/ft_strncmp.c : Allowed functions: none
// reproduce the behavior of the function strncmp
int ft_strncmp(char *s1, char *s2, unsigned int n);

int ft_strncmp(char *s1, char *s2, unsigned int n) {
    int i = 0;
    int j = 0;
    while ( *s1 != 0 && !i && j < n) {
        i = *s1++ - *s2++;
        j++;
    }
    if (!i && *s2 && j < n) i = -1; 
    return i;
}

int main() {
    write(1, "piscine 3 - 1\n", 14);
    char string0[] = "abcdefghijk lmnopq";
    char string1[] = "abcdefghijk lmnopq";
    unsigned int n = 20;
    printf("string0 %s \nstring1 %s", string0, string1);
    int result = ft_strncmp(string0, string1, n);
    printf("\nresult = %d", result);
    printf("\nstring0 %s string1", result == 0 ? "igual a" : result > 0 ? "maior que" : "menor que");
}