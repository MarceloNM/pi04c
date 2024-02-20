#include <unistd.h>

// ex08/ft_print_combn.c : Allowed functions: write
// displays all different combinations of n numbers by ascending order
// n will be so that : 0 < n < 10.
void ft_print_combn(int n);

void ft_print_combn(int n){
    char tmpi[n];   // primeiro elemento da combinatória
    char tmpf[n];   // último elemento da combinatória
    int ini = 48;      // define o '0'   // 64 define o 'A' // 98 define o 'a'
    for (int i = 0; i < n; i++ ) {   // Carrega valores  
        tmpi[i] = i + ini;           // 0, 1, 2, ..., n 
        tmpf[i] = 10 - n + i + ini;  // ..., 7, 8, 9
    }
    write(1, tmpi, n);    // escreve a primeira combinaçao
    write(1, ",", 1);  // e o respetivo separador
    int pos = n - 1;      // posição no array entre 0 e n corresponde à última posição do array
    int a = n - 1;        // variável auxiliar
    while ( pos >= 0 ) {  // enquanto a posição no array não for negativa
        if ( tmpi[pos] < tmpf[pos] ) { // se o valor atual for menor que o valor máximo para esta posição
            tmpi[pos]++;               // incrementa o valor na posição atual
            if (pos < n - 1){            // se a posição atual for menor que o máximo
                a = tmpi[pos]++;         // guarda a posição atual antes de incrementar
                for (int i = pos; i < n; i++){ // desde a posição atual até à última posição do array escreve a sequência adequada
                    tmpi[i] = a++;             // na posição seguinte o valor seguinte
                }
                pos = n - 1; // depois do ciclo a posição é a última do array, o lugar de variação mais rápida 
            }
            write(1, tmpi, n);   // escreve a seguinte combinação 
            write(1, ",", 1);  // e o correspondente separador.
        } else {   // caso o valor não seja menor 
            pos--;  // a posição no array é decrementada
        }
    }
}


int main() {
    write(1, "piscine 0 - 08\n", 15);
    ft_print_combn(7); 
}