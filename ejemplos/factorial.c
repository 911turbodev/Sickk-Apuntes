#include <stdio.h>

int main()
{
    int n;
    unsigned long long factorial = 1;

    // Pedir al usuario un número
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    // Validar que sea no negativo
    if (n < 0)
    {
        printf("El factorial no está definido para números negativos.\n");
    }
    else
    {
        // Calcular el factorial
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }

        printf("El factorial de %d es %d\n", n, factorial);
    }

    return 0;
}
