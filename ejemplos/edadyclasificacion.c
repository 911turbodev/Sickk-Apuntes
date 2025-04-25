#include <stdio.h>

int main()
{
    int edad;

    // Solicitar la edad
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    // Clasificación por edad
    if (edad < 0)
    {
        printf("Edad no válida.\n");
    }
    else if (edad < 18)
    {
        printf("Es menor de edad.\n");
    }
    else if (edad < 65)
    {
        printf("Es un adulto.\n");
    }
    else
    {
        printf("Es un adulto mayor.\n");
    }

    return 0;
}
