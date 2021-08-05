#include <stdio.h>

int n = -1;

int main() {
    if(n > 10 && n < 20)
        printf("El número es mayor que 10, pero es menor a 20");
    else if (n == 10)
        printf("El número  es 10");
    else if (n > 20)
        printf("El número es mayor que 20");
    else if (n < 10 && n >= 0)
        printf("El número está en el rango de 0 a 9");
    else
        printf("Error no quiero números negativos");

    return 0;
}