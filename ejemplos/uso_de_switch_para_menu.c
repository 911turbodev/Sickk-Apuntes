#include <stdio.h>

int main()
{
    int opcion;
    float a, b;

    printf("1. Sumar\n2. Restar\n3. Multiplicar\n4. Salir\nElija una opción: ");
    scanf("%d", &opcion);

    if (opcion >= 1 && opcion <= 3)
    {
        printf("Ingrese dos números: ");
        scanf("%f %f", &a, &b);
    }

    switch (opcion)
    {
    case 1:
        printf("Resultado: %.2f\n", a + b);
        break;
    case 2:
        printf("Resultado: %.2f\n", a - b);
        break;
    case 3: {
        printf("Resultado: %.2f\n", a * b);
        break;
    }