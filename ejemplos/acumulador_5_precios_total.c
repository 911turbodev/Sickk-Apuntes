// Ingresar 5 precios y mostrar la suma total y el promedio.

#include <stdio.h>

int main() {
    float precio, suma = 0.0, promedio;
    int i;

    printf("Ingrese 5 precios:\n");

    for (i = 0; i < 5; i++) {
        printf("Precio %d: ", i + 1);
        scanf("%f", &precio);
        suma += precio;
    }

    promedio = suma / 5;

    printf("La suma total es: %.2f\n", suma);
    printf("El promedio es: %.2f\n", promedio);

    return 0;
}