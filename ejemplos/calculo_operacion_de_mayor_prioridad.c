#include <stdio.h>

int main()
{
    int num1, num2;
    char operador;

    printf("Ingrese dos números y un operador (+, -, *, /): ");
    scanf("%d %d %c", &num1, &num2, &operador);

    if (operador == '+')
    {
        printf("Resultado: %d\n", num1 + num2);
    }
    else if (operador == '-')
    {
        printf("Resultado: %d\n", num1 - num2);
    }
    else if (operador == '*')
    {
        printf("Resultado: %d\n", num1 * num2);
    }
    else if (operador == '/')
    {
        if (num2 != 0)
        {
            printf("Resultado: %.2f\n", (float)num1 / num2);
        }
        else
        {
            printf("Error: No se puede dividir entre cero.\n");
        }
    }
    else
    {
        printf("Operador inválido.\n");
    }

    return 0;
}
