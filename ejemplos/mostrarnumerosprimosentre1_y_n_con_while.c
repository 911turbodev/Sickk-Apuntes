#include <stdio.h>

int main()
{
    int N, i = 2, j, esPrimo;

    printf("Ingrese un número N: ");
    scanf("%d", &N);

    printf("Números primos entre 1 y %d:\n", N);

    while (i <= N)
    {
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
        i++;
    }

    return 0;
}
