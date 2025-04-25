#include <stdio.h>

int main()
{
    int N, i, sumaPares = 0, sumaImpares = 0;

    printf("Ingrese un número N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            sumaPares += i;
        }
        else
        {
            sumaImpares += i;
        }
    }

    printf("Suma de números pares: %d\n", sumaPares);
    printf("Suma de números impares: %d\n", sumaImpares);

    return 0;
}
