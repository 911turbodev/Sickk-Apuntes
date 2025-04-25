#include <stdio.h>

int main()
{
    int edad;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad >= 18)
    {
        if (edad <= 120)
        {
            printf("Usted puede votar.\n");
        }
        else
        {
            printf("Edad inválida.\n");
        }
    }
    else
    {
        printf("Usted no puede votar.\n");
    }

    return 0;
}
