#include <stdio.h>

int main()
{
    int opcion;
    float total = 0, descuento = 0;

    do
    {
        printf("\n--- Menú de la Cafetería ---\n");
        printf("1. Café ($150)\n");
        printf("2. Té ($100)\n");
        printf("3. Jugo ($180)\n");
        printf("4. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            total += 150;
            printf("Agregaste Café.\n");
            break;
        case 2:
            total += 100;
            printf("Agregaste Té.\n");
            break;
        case 3:
            total += 180;
            printf("Agregaste Jugo.\n");
            break;
        case 4:
            printf("Saliendo del sistema...\n");
            break;
        default:
            printf("Opción inválida.\n");
        }

    } while (opcion != 4);

    if (total > 500)
    {
        descuento = total * 0.10;
        total -= descuento;
        printf("\nSe aplicó un 10%% de descuento (%.2f)\n", descuento);
    }

    printf("Total a pagar: %.2f\n", total);

    return 0;
}
