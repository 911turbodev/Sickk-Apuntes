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
            printf("El triángulo no es equilátero.\n");
        }
    }
    else
    {
        printf("El triángulo no es equilátero.\n");
    }

    return 0;
}
