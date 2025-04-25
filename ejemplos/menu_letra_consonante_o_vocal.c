// Menú de clasificación: ingresar una letra y determinar si es vocal o consonante.
#include <stdio.h>
#include <ctype.h>

int main() {
    char letra;

    printf("Ingrese una letra: ");
    scanf(" %c", &letra);

    // Convertir a minúscula para simplificar la comparación
    letra = tolower(letra);

    if ((letra >= 'a' && letra <= 'z')) {
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            printf("La letra '%c' es una vocal.\n", letra);
        } else {
            printf("La letra '%c' es una consonante.\n", letra);
        }
    } else {
        printf("El carácter ingresado no es una letra.\n");
    }

    return 0;
}
