#include <stdio.h>

int main() {
    int opcion;

    do {
        printf("\nMenú de Conversión:\n");
        printf("1. Convertir cm a pulgadas\n");
        printf("2. Convertir kg a libras\n");
        printf("3. Convertir °C a °F\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            float cm, pulgadas;
            printf("Ingrese la longitud en centímetros: ");
            scanf("%f", &cm);
            pulgadas = cm / 2.54;
            printf("%.2f cm son %.2f pulgadas.\n", cm, pulgadas);
        } else if (opcion == 2) {
            float kg, libras;
            printf("Ingrese el peso en kilogramos: ");
            scanf("%f", &kg);
            libras = kg * 2.20462;
            printf("%.2f kg son %.2f libras.\n", kg, libras);
        } else if (opcion == 3) {
            float c, f;
            printf("Ingrese la temperatura en grados Celsius: ");
            scanf("%f", &c);
            f = (c * 9 / 5) + 32;
            printf("%.2f °C son %.2f °F.\n", c, f);
        } else if (opcion == 4) {
            printf("Saliendo del programa...\n");
        } else {
            printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 4);

    return 0;
}
