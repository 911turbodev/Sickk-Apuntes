#include <stdio.h>

int main()
{
    int numero;

    // Pedir al usuario un número de 4 cifras
    printf("Ingrese un número de 4 cifras: ");
    scanf("%d", &numero);

    // Verificar que sea un número de 4 cifras
    if (numero < 1000 || numero > 9999)
    {
        printf("Por favor, ingrese un número de 4 cifras.\n");
        return 1;
    }

    // Obtener las cifras individuales
    int primeraCifra = numero / 1000;       // División entera por 1000
    int segundaCifra = (numero / 100) % 10; // División por 100 y luego el resto de 10
    int terceraCifra = (numero / 10) % 10;  // División por 10 y luego el resto de 10
    int cuartaCifra = numero % 10;          // Resto de la división por 10

    // Mostrar las cifras separadas
    printf("Cifras separadas: %d, %d, %d, %d\n", primeraCifra, segundaCifra, terceraCifra, cuartaCifra);

    return 0;
}
