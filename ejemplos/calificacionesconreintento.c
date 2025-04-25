#include <stdio.h>

int main()
{
    float calificacion;

    do
    {
        printf("Ingrese una calificación entre 0 y 10: ");
        scanf("%f", &calificacion);

        if (calificacion < 0 || calificacion > 10)
        {
            printf("Calificación inválida. Debe estar entre 0 y 10.\n");
        }
    } while (calificacion < 0 || calificacion > 10);

    if (calificacion >= 5)
    {
        printf("Aprobado\n");
    }
    else
    {
        printf("Reprobado\n");
    }

    return 0;
}
