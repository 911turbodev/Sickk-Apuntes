#include <stdio.h>

int main()
{
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("El número es divisible entre 2.\n");
    }
    else if (numero % 3 == 0)
    {
        printf("El número es divisible entre 3.\n");
    }
    else if (numero % 5 == 0)
    {
        printf("El número es divisible entre 5.\n");
    }
    else
    {
        printf("El número no es divisible ni entre 2, ni entre 3, ni entre 5.\n");
    }

    return 0;
}
