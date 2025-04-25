#include <stdio.h>

int main()
{
    int N, i, pares = 0, impares = 0;

    printf("Ingrese un número N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    printf("Cantidad de números pares: %d\n", pares);
    printf("Cantidad de números impares: %d\n", impares);

    return 0;
}
