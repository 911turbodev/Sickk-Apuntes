#include <stdio.h>

int main()
{
    int dia; // 1 = lunes, 2 = martes, ..., 7 = domingo
    float monto, descuento = 0.0;

    printf("Ingrese el día de la semana (1-7): ");
    scanf("%d", &dia);
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &monto);

    if (dia == 1)
    {
        descuento = 0.10;
    }
    else
    {
        if (dia == 3)
        {
            descuento = 0.20;
        }
        else
        {
            if (dia == 5)
            {
                descuento = 0.15;
            }
        }
    }

    float total = monto - (monto * descuento);
    printf("Total a pagar: %.2f\n", total);

    return 0;
}
