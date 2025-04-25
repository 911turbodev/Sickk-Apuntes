#include <stdio.h>

int main()
{
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero < 10)
    {
        printf("El número está en el rango menor que 10.\n");
    }
    else if (numero >= 10 && numero <= 20)
    {
        printf("El número está en el rango entre 10 y 20.\n");
    }
    else if (numero >= 21 && numero <= 50)
    {
        printf("El número está en el rango entre 21 y 50.\n");
    }
    else
    {
        printf("El número está en el rango mayor que 50.\n");
    }

    return 0;
}
