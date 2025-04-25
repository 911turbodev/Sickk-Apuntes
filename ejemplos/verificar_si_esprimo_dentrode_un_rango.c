#include <stdio.h>

int main()
{
    int N, i, j, esPrimo;

    printf("Ingrese un número N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
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

        if (esPrimo && i > 1)
        {
            printf("%d es primo.\n", i);
        }
        else
        {
            printf("%d no es primo.\n", i);
        }
    }

    return 0;
}
