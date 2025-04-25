#include <stdio.h>

int main()
{
    int edad;
    float precio = 120.0;
    float descuento = 0.0;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad < 12)
    {
        descuento = 0.50;
    }
    else
    {
        if (edad > 60)
        {
            descuento = 0.30;
        }
    }

    float total = precio - (precio * descuento);
    printf("Debe pagar: %.2f\n", total);

    return 0;
}
