#include <stdio.h>

int main() {
    int opcion;
    double num1, num2, resultado;

    do {
        printf("\nMenú:\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicación\n");
        printf("4. División\n");
        printf("5. Salir\n");
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) {
            printf("Ingrese dos números: ");
            scanf("%lf %lf", &num1, &num2);
        }

        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2lf\n", resultado);
                } else {
                    printf("Error: No se permite la división por cero.\n");
                }
                break;
            case 5:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción inválida. Por favor, intente de nuevo.\n");
        }
    } while (opcion != 5);

    return 0;
}
