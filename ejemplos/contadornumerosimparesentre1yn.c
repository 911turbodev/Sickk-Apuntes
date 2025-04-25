#include <stdio.h>

int main()
{
    int N, contador = 0;
    printf("Ingrese un número N: ");
    scanf("%d", &N);

    int i = 1;
    while (i <= N)
    {
        if (i % 2 != 0)
        {
            contador++;
        }
        i++;
    }

    printf("Hay %d números impares entre 1 y %d.\n", contador, N);

    return 0;
}
