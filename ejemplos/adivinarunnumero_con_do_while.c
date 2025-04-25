#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero, adivinanza;

    // Inicializar generador de números aleatorios
    srand(time(NULL));
    numero = rand() % 100 + 1;

    do
    {
        printf("Adivina el número entre 1 y 100: ");
        scanf("%d", &adivinanza);

        if (adivinanza < numero)
        {
            printf("Muy bajo! Intenta nuevamente.\n");
        }
        else if (adivinanza > numero)
        {
            printf("Muy alto! Intenta nuevamente.\n");
        }
        else
        {
            printf("¡Adivinaste! El número era %d.\n", numero);
        }
    } while (adivinanza != numero);

    return 0;
}
