#include <stdio.h>

int main()
{
    int N, i, j, esPrimo, suma = 0;

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
            suma += i;
        }
    }

    printf("La suma de los números primos hasta %d es: %d\n", N, suma);

    return 0;
}
