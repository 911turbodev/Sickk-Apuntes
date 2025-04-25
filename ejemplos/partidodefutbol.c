#include <stdio.h>

int main()
{
    int victorias_local = 0, victorias_visitante = 0, total_partidos = 0, empates = 0;
    char resultado;
    char continuar;

    printf("Analisis de resultados.\n");

    char local[50], visitante[50];
    printf("Ingrese el equipo local: ");
    scanf("%49s", local);
    printf("Ingrese el equipo visitante: ");
    scanf("%49s", visitante);

    while (1)
    {

        printf("Ingrese el resultado de %s vs %s (L = victoria local, V = victoria visitante, E = empate): ", local, visitante);
        scanf("%c", &resultado);

        if (resultado == 'L' || resultado == 'l')
        {
            victorias_local++;
        }
        else if (resultado == 'V' || resultado == 'v')
        {
            victorias_visitante++;
        }
        if (resultado == 'E' || resultado == 'e')
        {
            empates++;
        }

        total_partidos++;

        printf("¿Desea ingresar otro resultado? (S para sí, N para no): ");
        scanf("%c", &continuar);

        if (continuar != 'S' && continuar != 's')
        {
            break;
        }
    }

    if (total_partidos > 0)
    {
        int probabilidad_visitante = (victorias_visitante * 100) / total_partidos;
        int probabilidad_local = (victorias_local * 100) / total_partidos;
        int probabilidad_empate = (empates * 100) / total_partidos;

        printf("\nTotal de partidos: %d\n", total_partidos);
        printf("Victorias del local: %d\n", victorias_local);
        printf("Victorias del visitante: %d\n", victorias_visitante);
        printf("Cantidad de partidos empatados: %d\n", empates);

        printf("\nProbabilidad de que gane el visitante: %d%%\n", probabilidad_visitante);
        printf("Probabilidad de que gane el local: %d%%\n", probabilidad_local);
        printf("Probabilidad de que empaten: %d%%\n", probabilidad_empate);
    }
    else
    {
        printf("No se han ingresado partidos.\n");
    }

    return 0;
}