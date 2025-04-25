#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para convertir el valor numérico a la carta correspondiente
const char *cartaAString(int carta)
{
    switch (carta)
    {
    case 1:
        return "A"; // As
    case 11:
        return "J"; // Jack
    case 12:
        return "Q"; // Reina
    case 13:
        return "K"; // Rey
    default:
        return NULL; // Para números entre 2 y 10
    }
}

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

        // Convertir el valor numérico de la carta a su representación
        const char *cartaStr = (carta >= 2 && carta <= 10) ? (char[]){carta + '0', '\0'} : cartaAString(carta);

        // Pedir al usuario su adivinanza
        printf("\nLa carta va del A, 2, 3,... hasta el K. Adivina si es alta (mayor a 7) o baja (menor a 7).\n");
        printf("¿Es alta o baja? (h/b): ");
        scanf(" %c", &respuesta); // El espacio antes de %c es para limpiar el buffer

        // Verificar la respuesta del usuario
        if ((carta > 7 && respuesta == 'h') || (carta < 7 && respuesta == 'b'))
        {
            // Si acertó, mostrar la carta
            printf("¡Acertaste! La carta era: %s\n", cartaStr);
        }
        else if (carta == 7)
        {
            // Si la carta es 7, el usuario pierde
            printf("Perdiste. La carta era: %s\n", cartaStr);
            printf("Puntos: %d\n", puntos);
            break; // Termina el juego si el usuario pierde
        }
        else
        {
            // Si falló
            printf("Fallaste. La carta era: %s\n", cartaStr);
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
