#include <stdio.h>
#include <stdlib.h>

void registrarNotas() {
    int cantidad, i;
    printf("¿Cuántas notas desea registrar? ");
    scanf("%d", &cantidad);

    float notas[cantidad];
    for (i = 0; i < cantidad; i++) {
        printf("Ingrese la nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("\nNotas registradas:\n");
    for (i = 0; i < cantidad; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }
}

int main() {
    int opcion;

    do {
        printf("\nMenú de Registro de Notas\n");
        printf("1. Registrar notas\n");
        printf("2. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                registrarNotas();
                break;
            case 2:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 2);

    return 0;
}