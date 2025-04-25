#include <stdio.h>

int main()
{
    int lado1, lado2, lado3;

    printf("Ingrese las longitudes de los tres lados del triángulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 == lado2)
    {
        if (lado2 == lado3)
        {
            printf("El triángulo es equilátero.\n");
        }
        else
        {
            printf("El triángulo es isósceles.\n");
        }
    }
    else
    {
        if (lado2 == lado3 || lado1 == lado3)
        {
            printf("El triángulo es isósceles.\n");
        }
        else
        {
            printf("El triángulo es escaleno.\n");
        }
    }

    return 0;
}
