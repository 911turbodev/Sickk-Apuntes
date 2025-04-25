// Validación de Edad y Categoría
// Si la edad ingresada es negativa o mayor que 130, el programa debe pedir la edad nuevamente usando un do while hasta que se ingrese
// una edad válida. Dentro de esta estructura, usa if anidados para clasificar la edad.
#include <stdio.h>

int main()
{
    int edad;

    do
    {
        printf("Ingrese su edad: ");
        scanf("%d", &edad);

        if (edad < 0 || edad > 130)
        {
            printf("Edad inválida, ingrese una edad válida entre 0 y 130.\n");
        }
    } while (edad < 0 || edad > 130);

    if (edad < 18)
    {
        printf("Eres menor de edad.\n");
    }
    else
    {
        if (edad <= 64)
        {
            printf("Eres adulto.\n");
        }
        else
        {
            printf("Eres adulto mayor.\n");
        }
    }

    return 0;
}
