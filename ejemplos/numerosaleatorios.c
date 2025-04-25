#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Inicializar la semilla para la generación de números aleatorios
    srand(time(NULL));

    // Mostrar 50 números aleatorios entre 0 y 100
    for (int i = 0; i < 50; i++)
    {
        int numeroAleatorio = rand() % 101; // Genera un número entre 0 y 100
        printf("%d ", numeroAleatorio);
    }

    printf("\n");

    return 0;
}
