#include <stdio.h>

int main()
{
    int numero, i, esPrimo = 1;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("%d es un número par.\n", numero);
    }
    else
    {
        printf("%d es un número impar.\n", numero);
    }

    // Verificar si el número es primo
    if (numero <= 1)
    {
        esPrimo = 0;
    }
    else
    {
        for (i = 2; i <= numero / 2; i++)
        {
            if (numero % i == 0)
            {
                esPrimo = 0;
                break;
            }
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
