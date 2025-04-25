#include <stdio.h>

int main()
{
    int numero, esPrimo = 1;

    do
    {
        printf("Ingrese un número entero positivo: ");
        scanf("%d", &numero);

        if (numero <= 1)
        {
            printf("El número debe ser mayor que 1.\n");
        }
    } while (numero <= 1);

    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            esPrimo = 0;
            break;
        }
    }

    if (esPrimo)
    {
        printf("%d es un número primo.\n", numero);
    }
    else
    {
        printf("%d no es un número primo.\n", numero);
    }

    return 0;
}
