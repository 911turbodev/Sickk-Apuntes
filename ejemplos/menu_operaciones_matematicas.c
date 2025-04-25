#include <stdio.h>

int main()
{
    char opcion;
    float a, b, resultado;

    printf("Ingrese una opción (A: Suma, B: Resta, C: Multiplicación, D: División): ");
    scanf(" %c", &opcion);

    printf("Ingrese dos números: ");
    scanf("%f %f", &a, &b);

    switch (opcion)
    {
    case 'A':
    case 'a':
        resultado = a + b;
        printf("Resultado: %.2f\n", resultado);
        break;
    case 'B':
    case 'b':
        resultado = a - b;
        printf("Resultado: %.2f\n", resultado);
        break;
    case 'C':
    case 'c':
        resultado = a * b;
        printf("Resultado: %.2f\n", resultado);
        break;
    case 'D':
    case 'd':
        if (b != 0)
            resultado = a / b;
        else
        {
            printf("Error: División por cero.\n");
            return 1;
        }
        printf("Resultado: %.2f\n", resultado);
        break;
    default:
        printf("Opción no válida.\n");
    }

    return 0;
}
