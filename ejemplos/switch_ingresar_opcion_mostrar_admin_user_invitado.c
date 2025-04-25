// Ingresar una opción y mostrar el tipo de usuario: 1-Admin, 2-User, 3-Invitado.
#include <stdio.h>

int main() {
    int opcion;

    printf("Ingrese una opción (1-Admin, 2-User, 3-Invitado): ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Usted seleccionó: Admin\n");
            break;
        case 2:
            printf("Usted seleccionó: User\n");
            break;
        case 3:
            printf("Usted seleccionó: Invitado\n");
            break;
        default:
            printf("Opción no válida\n");
            break;
    }

    return 0;
}