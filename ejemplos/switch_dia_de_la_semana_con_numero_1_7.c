// Día de la semana con número (1–7).
#include <stdio.h>

int main() {
    int dia;

    printf("Introduce un número (1-7) para el día de la semana: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miércoles\n");
            break;
        case 4:
            printf("Jueves\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        case 6:
            printf("Sábado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Número inválido. Por favor introduce un número entre 1 y 7.\n");
            break;
    }

    return 0;
}