// Leer valores y acumular los que sean múltiplos de 5.

#include <stdio.h>

int main() {
    int valor, acumulador = 0;

    printf("Introduce valores enteros (0 para terminar):\n");
    while (1) {
        scanf("%d", &valor);
        if (valor == 0) {
            break;
        }
        if (valor % 5 == 0) {
            acumulador += valor;
        }
    }

    printf("La suma de los valores múltiplos de 5 es: %d\n", acumulador);
    return 0;
}