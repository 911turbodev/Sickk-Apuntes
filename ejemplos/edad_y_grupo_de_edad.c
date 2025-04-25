#include <stdio.h>

int main()
{
    int edad;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad < 13)
    {
        printf("Grupo: Infantil\n");
    }
    else if (edad >= 13 && edad <= 19)
    {
        printf("Grupo: Adolescente\n");
    }
    else if (edad >= 20 && edad <= 35)
    {
        printf("Grupo: Joven adulto\n");
    }
    else if (edad >= 36 && edad <= 64)
    {
        printf("Grupo: Adulto\n");
    }
    else
    {
        printf("Grupo: Adulto mayor\n");
    }

    return 0;
}
