#include <stdio.h>

int main()
{
    int opcion;
    float cantidad, resultado;

    // Tasas de cambio (ejemplo, pueden variar)
    float dolarAEuro = 0.93;
    float dolarAPeso = 870.0;
    float euroADolar = 1.08;

    // Mostrar opciones
    printf("Seleccione la conversión:\n");
    printf("1. Dólares a Euros\n");
    printf("2. Dólares a Pesos\n");
    printf("3. Euros a Dólares\n");
    printf("Ingrese una opción (1-3): ");
    scanf("%d", &opcion);

    // Leer la cantidad a convertir
    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    // Realizar conversión
    switch (opcion)
    {
    case 1:
        resultado = cantidad * dolarAEuro;
        printf("%.2f dólares = %.2f euros\n", cantidad, resultado);
        break;
    case 2:
        resultado = cantidad * dolarAPeso;
        printf("%.2f dólares = %.2f pesos\n", cantidad, resultado);
        break;
    case 3:
        resultado = cantidad * euroADolar;
        printf("%.2f euros = %.2f dólares\n", cantidad, resultado);
        break;
    default:
        printf("Opción no válida.\n");
    }

    return 0;
}
