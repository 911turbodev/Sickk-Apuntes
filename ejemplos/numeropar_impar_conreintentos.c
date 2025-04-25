#include <stdio.h>

int main()
{
    int numero;

    do
    {
        printf("Ingrese un número entero: ");
        scanf("%d", &numero);

        if (numero == 0)
        {
            printf("El número no es ni par ni impar. Intente de nuevo.\n");
        }
    } while (numero == 0); // Repetir si el número es 0

    if (numero % 2 == 0)
    {
        printf("El número %d es par.\n", numero);
    }
    else
    {
        printf("El número %d es impar.\n", numero);
    }

    return 0;
}
