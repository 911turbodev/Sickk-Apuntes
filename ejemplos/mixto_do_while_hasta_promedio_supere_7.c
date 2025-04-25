// Usar do-while para ingresar valores hasta que el promedio supere 7.
#include <stdio.h>

int main() {
    int suma = 0, contador = 0;
    float promedio;

    do {
        int numero;
        printf("Ingrese un número: ");
        scanf("%d", &numero);

        suma += numero;
        contador++;
        promedio = (float)suma / contador;

    } while (promedio <= 7);

    printf("El promedio ha superado 7. Promedio final: %.2f\n", promedio);

    return 0;
}