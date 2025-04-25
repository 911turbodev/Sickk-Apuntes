#include <stdio.h>

int main()
{
    int N, i = 1, suma = 0;

    printf("Ingrese un número N: ");
    scanf("%d", &N);

    while (i <= N)
    {
        suma += i;
        i++;
    }

    printf("La suma de los números del 1 al %d es: %d\n", N, suma);

    return 0;
}
