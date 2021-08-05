#include <stdio.h>

int main() {
    int n = 20;
    do {
        printf("n es igual a %d\n", n);
        n--;
    } while (n > 10);
    printf("Salió del bucle do while");
    
    return 0;
}