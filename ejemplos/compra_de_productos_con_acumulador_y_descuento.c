#include <stdio.h>

int main()
{
    float precio, total = 0;
    char continuar;

    do
    {
        printf("Ingrese el precio del producto: ");
        scanf("%f", &precio);
        total += precio;

        printf("¿Desea ingresar otro producto? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    if (total > 500)
    {
        total = total - (total * 0.10);
        printf("Se aplicó un 10%% de descuento.\n");
    }

    printf("Total a pagar: %.2f\n", total);
    return 0;
}
