// Clasificar número como par/impar y además positivo/negativo.
#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Clasificar como par o impar
    if (numero % 2 == 0) {
        printf("El número es par.\n");
    } else {
        printf("El número es impar.\n");
    }

    // Clasificar como positivo, negativo o cero
    if (numero > 0) {
        printf("El número es positivo.\n");
    } else if (numero < 0) {
        printf("El número es negativo.\n");
    } else {
        printf("El número es cero.\n");
    }

    return 0;
}