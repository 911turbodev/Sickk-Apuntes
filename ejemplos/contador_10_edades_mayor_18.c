//Pedir 10 edades y contar cuántos son mayores de 18.
#include <stdio.h>

int main() {
    int edad, contador = 0;

    for (int i = 0; i < 10; i++) {
        printf("Ingrese la edad %d: ", i + 1);
        scanf("%d", &edad);

        if (edad > 18) {
            contador++;
        }
    }

    printf("El número de personas mayores de 18 es: %d\n", contador);

    return 0;
}
