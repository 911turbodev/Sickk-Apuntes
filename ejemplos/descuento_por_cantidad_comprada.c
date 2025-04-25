#include <stdio.h>

int main()
{
    int cantidad;
    float precio_unitario = 50.0;
    float total, descuento = 0.0;

    printf("Ingrese la cantidad de productos: ");
    scanf("%d", &cantidad);

    if (cantidad > 10)
    {
        descuento = 0.20;
    }
    else
    {
        if (cantidad >= 5)
        {
            descuento = 0.10;
        }
    }

    total = cantidad * precio_unitario;
    total = total - (total * descuento);

    printf("Total a pagar: %.2f\n", total);

    return 0;
}
