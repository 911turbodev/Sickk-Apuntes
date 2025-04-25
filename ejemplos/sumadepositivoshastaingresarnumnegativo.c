// Suma de números positivos hasta ingresar un negativo
#include <stdio.h>

int main()
{
    int numero, suma = 0;

    printf("Ingrese un número positivo (o negativo para terminar): ");
    scanf("%d", &numero);

    while (numero >= 0)
    {
        suma += numero;
        printf("Ingrese un número positivo (o negativo para terminar): ");
        scanf("%d", &numero);
    }

    printf("La suma total de los números positivos es: %d\n", suma);

    return 0;
}
