#include <stdio.h>

int main()
{
    int N, suma = 0;

    printf("Ingrese un número N: ");
    scanf("%d", &N);

    if (N > 0)
    {
        for (int i = 1; i <= N; i++)
        {
            suma += i;
        }
        printf("La suma de los primeros %d números naturales es: %d\n", N, suma);
    }
    else
    {
        printf("N debe ser un número positivo.\n");
    }

    return 0;
}
