#include <stdio.h>

int main()
{
    char tipo, continuar;
    float monto, descuento, total;

    while (1)
    {
        printf("Ingrese el tipo de cliente (E/J/N): ");
        scanf(" %c", &tipo);

        printf("Ingrese el monto de la compra: ");
        scanf("%f", &monto);

        if (tipo == 'E' || tipo == 'e')
        {
            descuento = 0.15;
        }
        else
        {
            if (tipo == 'J' || tipo == 'j')
            {
                descuento = 0.20;
            }
            else
            {
                descuento = 0.0;
            }
        }

        total = monto - (monto * descuento);
        printf("Total a pagar: %.2f\n", total);

        printf("¿Procesar otro cliente? (s/n): ");
        scanf(" %c", &continuar);
        if (continuar != 's' && continuar != 'S')
            break;
    }

    return 0;
}
