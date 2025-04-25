#include <stdio.h>
#include <math.h>

int main()
{
    int numero;
    double raiz;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero >= 0)
    {
        raiz = sqrt(numero);
        if (raiz == (int)raiz)
        {
            printf("El número es un cuadrado perfecto.\n");
        }
        else
        {
            printf("El número no es un cuadrado perfecto.\n");
        }
    }
    else
    {
        printf("El número no puede ser negativo.\n");
    }

    return 0;
}
