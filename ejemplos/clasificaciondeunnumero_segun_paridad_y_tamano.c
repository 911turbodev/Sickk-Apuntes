#include <stdio.h>

int main()
{
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("El número es par.\n");
        if (numero > 10)
        {
            printf("Es mayor que 10.\n");
        }
        else
        {
            printf("Es menor o igual a 10.\n");
        }
    }
    else
    {
        printf("El número es impar.\n");
    }

    return 0;
}
