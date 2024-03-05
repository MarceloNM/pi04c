#include <unistd.h>
#include <stdio.h>


// ex04/ft_fibonacci.c : Allowed functions: none
// create a function ft_fibonacci that returns the n-th element of the Fibonacci
// sequence, the first element being at the 0 index. We’ll consider that the Fibonacci
// sequence starts like this: 0, 1, 1, 2.
// overflows must not be handled, the function return will be undefined
// obviously, ft_fibonacci has to be recursive
// if the index is less than 0, the function should return -1

int ft_fibonacci(int index);

int ft_fibonacci(int index) {
    if (index < 0) return -1;
    if (index == 0) return 0;
    if (index == 1 ) return 1;
    else return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

int main() {
    write(1, "piscine 5 - 4\n", 14);
    
    for (int index = 0; index < 30; index++) {

        int n = ft_fibonacci(index);
        printf("%d = %d || ", index, n);
    }

}