#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

// ex02/ft_strcapitlize.c : Allowed functions: none
// capitalizes the first letter of each word and transforms all
// other letters to lowercase.alp
// it should return str
// "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"
// "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un"
char *ft_strcapitalize(char *str);


char *ft_strcapitalize(char *str) {
    char *s = str;
    int capitalizar = 1;
    while (*s != '\0') {
        if (capitalizar) {
            if (*s > 96 && *s < 123) {
                *s -= 32;
                capitalizar = 0;
            } 
        } else {
            if ((*s > 31 && *s < 65) || (*s > 90 && *s < 97) || (*s > 122 && *s < 127)) capitalizar = 1;
        }
        *s++;
    }
    return str;
}

char *ft_strcapitalize2(char *str) {
    char *s = str;
    int capitalizar = 1;
    while (*s != '\0') {
        if (capitalizar) {
            if (*s > 96 && *s < 123) {
                *s -= 32;
                capitalizar = 0;
            } 
        } else {
            if (*s > 64 && *s < 91) *s += 32;   // maiúsculas para minúsculas fora do início de palavras
            else if ((*s > 31 && *s < 65) || (*s > 90 && *s < 97) || (*s > 122 && *s < 127)) capitalizar = 1;
        }
        *s++;
    }
    return str;
}

int main() {
    write(1, "piscine 1 - 9\n\n", 14);
    char origem[] = "salut,a cOmment tu vaS b?b 42mots qUarante-deux;t cinQuante*et+un";
    char origem2[] = "salut,a cOmment tu vaS b?b 42mots qUarante-deux;t cinQuante*et+un";
    printf("\n%s ", origem);
    printf("\n%s ", ft_strcapitalize(origem));
    printf("\n%s ", ft_strcapitalize2(origem2));
}