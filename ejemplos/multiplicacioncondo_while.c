#include <stdio.h>

int main()
{
    int numero, multiplicador, resultado;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    multiplicador = 1;
    do
    {
        resultado = numero * multiplicador;
        printf("%d x %d = %d\n", numero, multiplicador, resultado);
        multiplicador++;
    } while (resultado <= 100);

    return 0;
}
