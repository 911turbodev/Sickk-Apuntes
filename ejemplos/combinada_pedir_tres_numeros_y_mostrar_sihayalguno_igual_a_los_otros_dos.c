#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Pedir tres números al usuario
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);

    // Verificar si hay números iguales
    if (num1 == num2 || num1 == num3 || num2 == num3) {
        printf("Hay al menos dos números iguales.\n");
    } else {
        printf("Todos los números son diferentes.\n");
    }

    return 0;
}
