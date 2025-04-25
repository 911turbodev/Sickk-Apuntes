#include <stdio.h>

int main()
{
    int N, i = 2, j, esPrimo, contador = 0;

    printf("Ingrese el número de primos a mostrar: ");
    scanf("%d", &N);

    printf("Primeros %d números primos:\n", N);

    while (contador < N)
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
            contador++;
        }
        i++;
    }
    printf("\n");

    return 0;
}
