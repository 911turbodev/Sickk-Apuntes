#include <stdio.h>

int main()
{
    int numero;

    // Pedir al usuario un número de dos cifras
    printf("Ingrese un número de dos cifras: ");
    scanf("%d", &numero);

    // Verificar que sea un número de dos cifras
    if (numero < 10 || numero > 99)
    {
        printf("Por favor, ingrese un número de dos cifras.\n");
        return 1;
    }

    // Obtener la primera y la segunda cifra
    int primeraCifra = numero / 10; // División entera por 10
    int segundaCifra = numero % 10; // Resto de la división por 10

    // Mostrar las cifras separadas
    printf("Primera cifra: %d\n", primeraCifra);
    printf("Segunda cifra: %d\n", segundaCifra);

    return 0;
}
