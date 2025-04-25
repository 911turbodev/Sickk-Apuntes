#include <stdio.h>

int main()
{
    char nombre[50];
    int edad;

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    printf("Hola %s, tienes %d años.\n", nombre, edad);
    if (edad >= 18)
    {
        printf("Eres mayor de edad.\n");
    }

    return 0;
}