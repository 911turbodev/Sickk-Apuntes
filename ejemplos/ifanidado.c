#include <stdio.h>

int main()
{
    int calificacion;
    printf("Ingrese la calificación del examen (0-100): ");
    scanf("%d", &calificacion);

    if (calificacion >= 0 && calificacion <= 100)
    {
        if (calificacion >= 90)
        {
            printf("Excelente\n");
        }
        else if (calificacion >= 70)
        {
            printf("Bueno\n");
        }
        else if (calificacion >= 50)
        {
            printf("Suficiente\n");
        }
        else
        {
            printf("Insuficiente\n");
        }
    }
    else
    {
        printf("Calificación inválida. Debe estar entre 0 y 100.\n");
    }

    return 0;
}
