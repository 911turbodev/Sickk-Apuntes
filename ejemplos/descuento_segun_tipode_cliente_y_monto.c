#include <stdio.h>

int main()
{
    char tipo;
    float monto, descuento = 0.0;

    printf("Ingrese tipo de cliente (R para regular, V para VIP): ");
    scanf(" %c", &tipo);

    printf("Ingrese el monto de la compra: ");
    scanf("%f", &monto);

    if (tipo == 'V' || tipo == 'v')
    {
        descuento = 0.15;
    }
    else
    {
        if (monto > 500)
        {
            descuento = 0.05;
        }
    }

    float total = monto - (monto * descuento);
    printf("Total a pagar: %.2f\n", total);

    return 0;
}
