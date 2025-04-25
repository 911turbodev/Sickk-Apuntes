// Contar cuántos números primos se ingresan hasta un negativo.
#include <stdio.h>

int main() {
    int numero, contador_primos = 0;

    printf("Ingrese números enteros (un número negativo para terminar):\n");
    while (1) {
        scanf("%d", &numero);
        if (numero < 0) {
            break;
        }
        if (numero >= 2) {
            int es_primo = 1;
            for (int i = 2; i * i <= numero; i++) {
                if (numero % i == 0) {
                    es_primo = 0;
                    break;
                }
            }
            if (es_primo) {
                contador_primos++;
            }
        }
    }

    printf("Cantidad de números primos ingresados: %d\n", contador_primos);
    return 0;
}
