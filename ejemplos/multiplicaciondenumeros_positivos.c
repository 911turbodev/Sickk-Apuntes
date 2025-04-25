#include <stdio.h>

int main()
{
    int numero, resultado = 1;

    do
    {
        printf("Ingrese un número positivo: ");
        scanf("%d", &numero);

        if (numero <= 0)
        {
            printf("Por favor, ingrese un número positivo.\n");
        }
    } while (numero <= 0);

    int multiplicador = 1;
    do
    {
        resultado = numero * multiplicador;
        printf("%d x %d = %d\n", numero, multiplicador, resultado);
        multiplicador++;
    } while (resultado <= 100);

    return 0;
}
