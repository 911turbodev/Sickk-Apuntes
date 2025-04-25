#include <stdio.h>

int main()
{
    int A, B, i, j, esPrimo;

    printf("Ingrese el número A: ");
    scanf("%d", &A);
    printf("Ingrese el número B: ");
    scanf("%d", &B);

    printf("Números primos entre %d y %d:\n", A, B);

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
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
