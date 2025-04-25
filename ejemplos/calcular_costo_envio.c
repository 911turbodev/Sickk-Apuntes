#include <stdio.h>

int main()
{
    float peso;

    // Pedir al usuario el peso del paquete
    printf("Introduce el peso del paquete (kg): ");
    scanf("%f", &peso);

    // Determinar el costo de envío basado en el peso
    if (peso <= 10)
    {
        printf("El costo de envío es: 50 unidades\n");
    }
    else
    {
        if (peso <= 20)
        {
            printf("El costo de envío es: 100 unidades\n");
        }
        else
        {
            if (peso <= 50)
            {
                printf("El costo de envío es: 200 unidades\n");
            }
            else
            {
                printf("El costo de envío es: 500 unidades\n");
            }
        }
    }

    return 0;
}
