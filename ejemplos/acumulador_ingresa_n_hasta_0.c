// Ingresar N números hasta que se ingrese 0. Mostrar suma total.

#include <stdio.h>

int main() {
    int numero, suma = 0;

    printf("Ingrese números (ingrese 0 para terminar):\n");

    do {
        printf("Número: ");
        scanf("%d", &numero);
        suma += numero;
    } while (numero != 0);

    printf("La suma total es: %d\n", suma);

    return 0;
}