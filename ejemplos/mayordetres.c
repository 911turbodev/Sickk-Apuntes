#include <stdio.h>

int main()
{
    int a, b, c;

    // Pedir los tres números
    printf("Ingrese el primer número: ");
    scanf("%d", &a);

    printf("Ingrese el segundo número: ");
    scanf("%d", &b);

    printf("Ingrese el tercer número: ");
    scanf("%d", &c);

    int mayor;

    // Determinar el mayor
    if (a >= b && a >= c)
    {
        mayor = a;
    }
    else if (b >= a && b >= c)
    {
        mayor = b;
    }
    else
    {
        mayor = c;
    }

    // Mostrar el mayor
    printf("El mayor número es: %d\n", mayor);

    // Verificar si hay empates con el mayor
    int iguales = 0;
    if (a == mayor)
        iguales++;
    if (b == mayor)
        iguales++;
    if (c == mayor)
        iguales++;

    if (iguales > 1)
    {
        printf("Hay %d números iguales al mayor.\n", iguales);
    }

    return 0;
}
