#include <stdio.h>

int main()
{
    int numero;

    // Pedir al usuario un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Mostrar la tabla de multiplicar del 1 al 10
    printf("Tabla de multiplicar del %d:\n", numero);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
