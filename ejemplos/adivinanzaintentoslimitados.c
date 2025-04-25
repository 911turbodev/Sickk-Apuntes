#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numeroSecreto, intento, intentosMax = 7;
    int jugar = 1;
    int ganadas = 0;
    char opcion;

    srand(time(NULL)); // Semilla para números aleatorios

    while (jugar)
    {
        numeroSecreto = rand() % 100 + 1; // Número entre 1 y 100
        printf("\n¡Adivina el número entre 1 y 100! Tienes %d intentos.\n", intentosMax);

        int acertado = 0;

        for (int i = 1; i <= intentosMax; i++)
        {
            printf("Intento %d: ", i);
            scanf("%d", &intento);

            if (intento == numeroSecreto)
            {
                printf("¡Adivinaste!\n");
                ganadas++;
                acertado = 1;
                break;
            }
            else if (intento > numeroSecreto)
            {
                printf("Muy alto.\n");
            }
            else
            {
                printf("Muy bajo.\n");
            }
        }

        if (!acertado)
        {
            printf("No acertaste. El número era: %d\n", numeroSecreto);
        }

        // Preguntar si quiere jugar otra vez
        printf("¿Quieres jugar otra vez? (s/n): ");
        scanf(" %c", &opcion); // Espacio antes de %c para evitar errores con el buffer

        if (opcion != 's' && opcion != 'S')
        {
            jugar = 0;
        }
    }

    printf("\nCantidad de veces que ganaste: %d\n", ganadas);
    printf("¡Gracias por jugar!\n");

    return 0;
}
