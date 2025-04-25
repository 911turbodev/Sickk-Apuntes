#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int carta, puntos = 1;
    char respuesta;
    int jugando = 1;

    // Inicializar la semilla para números aleatorios
    srand(time(NULL));

    while (jugando)
    {
        // Generar una carta aleatoria entre 1 y 13 (representando las cartas de poker)
        carta = rand() % 13 + 1;

        // Pedir al usuario su adivinanza
        printf("\nLa carta va del 1 al 13. Adivina si es alta (mayor a 7) o baja (menor a 7).\n");
        printf("¿Es alta o baja? (h/b): ");
        scanf(" %c", &respuesta); // El espacio antes de %c es para limpiar el buffer

        // Verificar la respuesta del usuario
        if ((carta > 7 && respuesta == 'h') || (carta < 7 && respuesta == 'b'))
        {
            // Si acertó, mostrar la carta
            printf("¡Acertaste! La carta era: %d\n", carta);
        }
        else if (carta == 7)
        {
            // Si la carta es 7, el usuario pierde
            printf("Perdiste. La carta era: %d\n", carta);
            printf("Puntos: %d\n", puntos);
            break; // Termina el juego si el usuario pierde
        }
        else
        {
            // Si falló
            printf("Fallaste. La carta era: %d\n", carta);
            printf("Puntos acumulados: %d\n", puntos);
        }

        // Si el usuario acertó, duplicamos los puntos
        if (carta != 7)
        {
            puntos *= 2;
        }

        // Preguntar si quiere seguir jugando
        printf("¿Quieres seguir jugando? (s/n): ");
        scanf(" %c", &respuesta);

        if (respuesta != 's' && respuesta != 'S')
        {
            jugando = 0; // Terminar el juego si la respuesta es diferente a 's' o 'S'
        }
    }

    printf("Juego finalizado. ¡Gracias por jugar!\n");

    return 0;
}
