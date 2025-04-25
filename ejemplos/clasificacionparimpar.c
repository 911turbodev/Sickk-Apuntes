#include <stdio.h>

int main()
{
    int numero;

    // Pedir número al usuario
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Clasificación
    if (numero > 0)
    {
        printf("El número es positivo.\n");

        // Verificar si es par o impar
        if (numero % 2 == 0)
        {
            printf("%d es un número par.\n", numero);
        }
        else
        {
            printf("%d es un número impar.\n", numero);
        }
    }
    else if (numero < 0)
    {
        printf("El número es negativo.\n");
    }
    else
    {
        printf("El número es cero.\n");
    }

    return 0;
}
