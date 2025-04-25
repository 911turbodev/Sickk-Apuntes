#include <stdio.h>

int main()
{
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("El número es positivo.\n");
        if (numero % 2 == 0)
        {
            printf("Es par.\n");
        }
        else
        {
            printf("Es impar.\n");
        }
    }
    else if (numero < 0)
    {
        printf("El número es negativo.\n");
    }
    else
    {
        printf("El número es cero.\n");
    }

    return 0;
}
