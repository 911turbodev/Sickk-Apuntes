#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num1, num2, resultadoUsuario, resultadoReal, puntos = 0;
    char operacion;
    int jugando = 1;

    // Inicializar la semilla para números aleatorios
    srand(time(NULL));

    while (jugando)
    {
        // Generar dos números aleatorios de dos cifras
        num1 = rand() % 90 + 10; // Genera un número entre 10 y 99
        num2 = rand() % 90 + 10; // Genera un número entre 10 y 99

        // Elegir una operación aleatoria
        int operacionAleatoria = rand() % 3; // 0: suma, 1: resta, 2: multiplicación

        if (operacionAleatoria == 0)
        {
            operacion = '+';
            resultadoReal = num1 + num2;
        }
        else if (operacionAleatoria == 1)
        {
            operacion = '-';
            resultadoReal = num1 - num2;
        }
        else
        {
            operacion = '*';
            resultadoReal = num1 * num2;
        }

        // Mostrar la operación
        printf("\n¿Qué es %d %c %d? ", num1, operacion, num2);
        scanf("%d", &resultadoUsuario);

        // Verificar si la respuesta es correcta
        if (resultadoUsuario == resultadoReal)
        {
            puntos++; // Incrementar puntos si la respuesta es correcta
            printf("¡Correcto! Llevas %d puntos.\n", puntos);
        }
        else
        {
            // Si se equivocó, terminar el juego
            printf("¡Incorrecto! La respuesta correcta era: %d\n", resultadoReal);
            printf("Puntos finales: %d\n", puntos);
            jugando = 0;
        }
    }

    return 0;
}
