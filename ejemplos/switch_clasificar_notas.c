#include <stdio.h>

int main() {
    int nota;

    printf("Ingrese la nota (0-20): ");
    scanf("%d", &nota);

    if (nota < 0 || nota > 20) {
        printf("Nota fuera de rango.\n");
    } else {
        switch (nota) {
            case 0 ... 4:
                printf("Muy malo\n");
                break;
            case 5 ... 10:
                printf("Malo\n");
                break;
            case 11 ... 14:
                printf("Regular\n");
                break;
            case 15 ... 17:
                printf("Bueno\n");
                break;
            case 18 ... 20:
                printf("Excelente\n");
                break;
        }
    }

    return 0;
}