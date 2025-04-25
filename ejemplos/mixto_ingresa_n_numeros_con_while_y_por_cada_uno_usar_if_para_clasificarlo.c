#include <stdio.h>

int main()
{
    int n, numero, i = 0;
    printf("Ingrese la cantidad de números que desea ingresar: ");
    scanf("%d", &n);

    while (i < n)
    {
        printf("Ingrese un número: ");
        scanf("%d", &numero);

        if (numero > 0)
        {
            printf("El número %d es positivo.\n", numero);
        }
        else if (numero < 0)
        {
            printf("El número %d es negativo.\n", numero);
        }
        else
        {
            printf("El número es cero.\n");
        }

        i++;
    }

    return 0;
}