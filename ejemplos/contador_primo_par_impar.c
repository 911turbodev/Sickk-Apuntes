#include <stdio.h>

int main()
{
    int numero, i, esPrimo = 1;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Verificación de primo
    if (numero <= 1)
    {
        printf("%d no es un número primo.\n", numero);
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

    if (esPrimo && numero > 1)
    {
        printf("%d es un número primo.\n", numero);
    }
    else
    {
        if (numero % 2 == 0)
        {
            printf("%d es un número par.\n", numero);
        }
        else
        {
            printf("%d es un número impar.\n", numero);
        }
    }

    return 0;
}
