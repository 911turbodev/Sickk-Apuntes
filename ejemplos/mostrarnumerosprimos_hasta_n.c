#include <stdio.h>

int main()
{
    int N, i, j, esPrimo;

    printf("Ingrese un número N: ");
    scanf("%d", &N);

    printf("Números primos hasta %d:\n", N);

    for (i = 2; i <= N; i++)
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
    }
    printf("\n");

    return 0;
}
