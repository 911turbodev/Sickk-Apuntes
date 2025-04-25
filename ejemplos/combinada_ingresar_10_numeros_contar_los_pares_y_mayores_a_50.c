// Ingresar 10 números, contar los que son pares y >50.
#include <stdio.h>

int main() {
    int numeros[10];
    int contador_pares_mayores_50 = 0;

    printf("Ingrese 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0 && numeros[i] > 50) {
            contador_pares_mayores_50++;
        }
    }

    printf("Cantidad de numeros pares y mayores a 50: %d\n", contador_pares_mayores_50);

    return 0;
}