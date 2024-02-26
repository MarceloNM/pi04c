#include <unistd.h>
#include <stdio.h>

// ex00/ft_strcmp.c : Allowed functions: none
// reproduce the behavior of the function strcmp
int ft_strcmp(char *s1, char *s2);

int ft_strcmp(char *s1, char *s2){
    int i = 0;
    while ( *s1 != 0 && !i) {
        i = *s1++ - *s2++;
    }
    if (!i && *s2) i = -1; 
    return i;
}

int main() {
    write(1, "piscine 3 - 0\n", 14);
    char string0[] = " abcdefghijk lmnopq";
    char string1[] = "abcdefghijk lmnopq  ";
    printf("string0 %s \nstring1 %s", string0, string1);
    int result = ft_strcmp(string0, string1);
    printf("\nresult = %d", result);
    printf("\nstring0 %s string1", result == 0 ? "igual a" : result > 0 ? "maior que" : "menor que");
}