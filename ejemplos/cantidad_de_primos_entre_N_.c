#include <stdio.h>

int main()
{
    int N, i, j, esPrimo, contador = 0;

    printf("Ingrese un número N: ");
    scanf("%d", &N);

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
            contador++;
        }
    }

    printf("La cantidad de números primos entre 1 y %d es: %d\n", N, contador);

    return 0;
}
