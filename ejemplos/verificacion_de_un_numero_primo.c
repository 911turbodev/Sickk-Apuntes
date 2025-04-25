#include <stdio.h>

int main()
{
    int numero, i, esPrimo = 1;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero <= 1)
    {
        printf("El número no es primo.\n");
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

        if (esPrimo)
        {
            printf("El número es primo.\n");
        }
        else
        {
            printf("El número no es primo.\n");
        }
    }

    return 0;
}
