#include <stdio.h>
#include <stdbool.h>

int main()
{
    int edad, suma = 0, contador = 0;

    int edad_min = 2147483647;  // Valor inicial alto para encontrar el mínimo
    int edad_max = -2147483648; // Valor inicial bajo para encontrar el máximo

    printf("Ingrese las edades una por una (ingrese 0 para finalizar):\n");

    bool continuar = true;

    while (continuar)
    {
        printf("Edad: ");
        scanf("%d", &edad);

        if (edad < 0)
        {
            printf("Error: La edad no puede ser negativa. Intente nuevamente.\n");
        }
        else if (edad == 0)
        {
            continuar = false;
        }
        else
        {
            // Calculos para el resultado:
            suma += edad;
            contador++;

            if (edad < edad_min)
            {
                edad_min = edad;
            }

            if (edad > edad_max)
            {
                edad_max = edad;
            }
        }
    }

    if (contador > 0)
    {
        float promedio = (float)suma / contador;
        printf("\nResultados:\n");
        printf("Promedio de edades: %.2f\n", promedio);
        printf("Edad más pequeña: %d\n", edad_min);
        printf("Edad más alta: %d\n", edad_max);
    }

    return 0;
}