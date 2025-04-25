#include <stdio.h>

int main() {
    int numero;
    int es_primo = 1; // 1 significa que es primo, 0 que no lo es

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        es_primo = 0;
    } else {
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                es_primo = 0;
                break;
            }
        }
    }

    if (es_primo) {
        printf("El número %d es primo.\n", numero);
        if (numero > 10) {
            printf("Además, el número es mayor a 10.\n");
        } else {
            printf("Sin embargo, el número no es mayor a 10.\n");
        }
    } else {
        printf("El número %d no es primo.\n", numero);
    }

    return 0;
}