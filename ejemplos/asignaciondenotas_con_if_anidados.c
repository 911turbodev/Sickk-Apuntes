#include <stdio.h>

int main()
{
    int calificacion;

    printf("Ingrese la calificación numérica del examen: ");
    scanf("%d", &calificacion);

    if (calificacion >= 90 && calificacion <= 100)
    {
        printf("Nota: A\n");
    }
    else if (calificacion >= 80 && calificacion < 90)
    {
        printf("Nota: B\n");
    }
    else if (calificacion >= 70 && calificacion < 80)
    {
        printf("Nota: C\n");
    }
    else if (calificacion >= 60 && calificacion < 70)
    {
        printf("Nota: D\n");
    }
    else if (calificacion < 60)
    {
        printf("Nota: F\n");
    }

    return 0;
}
