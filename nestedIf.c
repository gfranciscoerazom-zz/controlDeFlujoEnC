#include <stdio.h>

int option1, option2;

int main() {
    printf("Bienvenido a platzi store\n");
    printf("Opción 0 para platzi bebidas\n");
    printf("Opción 1 para platzi comidas\n");
    printf("Opción 2 para platzi postres\n");

    // Este programa genera menus según lo que el usuario elija
    if(option1 == 0) {
        printf("Usted eligió la opción 0, vera nuestro menú de bebidas elija una:\n");
        printf("Opción 0 para platzi cola cero\n");
        printf("Opción 1 para platzi normal\n");
        printf("Opción 2 para platzi piña colada\n");
        if (option2 == 0)
            printf("Usted eligió una platzi cola cero, mmm rico");
        else if (option2 == 1)
            printf("Usted eligió una platzi cola con azúcar, mmm rico");
        else if (option2 == 2)
            printf("Usted eligió una platzi piña colada, mmm rico");
        else
            printf("Opción invalida");
    }

    return 0;
}