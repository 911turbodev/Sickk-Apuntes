#include <stdio.h>

int main()
{
    int A, B, i, j, esPrimo, contador = 0;

    printf("Ingrese el número A: ");
    scanf("%d", &A);
    printf("Ingrese el número B: ");
    scanf("%d", &B);

    for (i = A; i <= B; i++)
    {
        if (i <= 1)
            continue; // Saltar números menores o iguales a 1
        esPrimo = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                esPrimo = 0;
                break;
            }
        }
        if (esPrimo)
        {
            contador++;
        }
    }

    printf("Cantidad de números primos entre %d y %d: %d\n", A, B, contador);

    return 0;
}
