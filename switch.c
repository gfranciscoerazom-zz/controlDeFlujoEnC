#include <stdio.h>

int opt1, opt2;

int main() {
    printf("Bienvenido a platzi store\n");
    printf("Opción 0 para platzi bebidas\n");
    printf("Opción 1 para platzi comidas\n");
    printf("Opción 2 para platzi postres\n");

    switch(opt1) {
        case 0:
            printf("Usted eligió la opción 0, vera nuestro menú de bebidas elija una:\n");
            printf("Opción 0 para platzi cola cero\n");
            printf("Opción 1 para platzi normal\n");
            printf("Opción 2 para platzi piña colada\n");
            switch(opt2) {
                case 0:
                    printf("Usted eligió una platzi cola cero, mmm rico");
                    break;
                case 1:
                    printf("Usted eligió una platzi cola con azúcar, mmm rico");
                    break;
            }
        break;
    }
    return 0;
}