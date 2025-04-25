#include <stdio.h>

int main() {
    char letra;

    printf("Ingrese una letra (A, B, C): ");
    scanf(" %c", &letra);

    if (letra == 'A' || letra == 'a') {
        printf("Categoria: Excelente\n");
    } else if (letra == 'B' || letra == 'b') {
        printf("Categoria: Bueno\n");
    } else if (letra == 'C' || letra == 'c') {
        printf("Categoria: Regular\n");
    } else {
        printf("Letra no valida\n");
    }

    return 0;
}