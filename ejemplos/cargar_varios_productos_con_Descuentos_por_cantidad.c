#include <stdio.h>

int main()
{
    float precio, total = 0, descuento;

    for (int i = 1; i <= 5; i++)
    {
        printf("Producto %d - Ingrese el precio: ", i);
        scanf("%f", &precio);

        if (precio > 200)
        {
            descuento = 0.10;
        }
        else
        {
            if (precio > 100)
            {
                descuento = 0.05;
            }
            else
            {
                descuento = 0.0;
            }
        }

        precio = precio - (precio * descuento);
        total += precio;
    }

    printf("Total a pagar por los 5 productos: %.2f\n", total);
    return 0;
}
