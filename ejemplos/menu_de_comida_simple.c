#include <stdio.h>

int main()
{
    int opcion;

    printf("Menú:\n1. Pizza\n2. Hamburguesa\n3. Ensalada\n4. Salir\n");
    printf("Ingrese su elección: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Usted eligió Pizza\n");
        break;
    case 2:
        printf("Usted eligió Hamburguesa\n");
        break;
    case 3:
        printf("Usted eligió Ensalada\n");
        break;
    case 4:
        printf("Saliendo del programa...\n");
        break;
    default:
        printf("Opción inválida\n");
    }

    return 0;
}
