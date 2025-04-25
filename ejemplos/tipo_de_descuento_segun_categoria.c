#include <stdio.h>

int main()
{
    char categoria;
    float monto, descuento = 0;

    printf("Ingrese la categoría del cliente (A, B, C): ");
    scanf(" %c", &categoria);

    printf("Ingrese el monto de la compra: ");
    scanf("%f", &monto);

    switch (categoria)
    {
    case 'A':
    case 'a':
        descuento = 0.10;
        break;
    case 'B':
    case 'b':
        descuento = 0.20;
        break;
    case 'C':
    case 'c':
        descuento = 0.30;
        break;
    default:
        printf("Categoría inválida\n");
        return 1;
    }

    float total = monto - (monto * descuento);
    printf("Total con descuento: %.2f\n", total);

    return 0;
}
