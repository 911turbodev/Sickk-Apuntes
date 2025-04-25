#include <stdio.h>

int main()
{
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("El número es negativo.\n");
    }
    else if (numero >= 0 && numero <= 50)
    {
        printf("El número está en el rango bajo.\n");
    }
    else if (numero >= 51 && numero <= 100)
    {
        printf("El número está en el rango medio.\n");
    }
    else
    {
        printf("El número está en el rango alto.\n");
    }

    return 0;
}
