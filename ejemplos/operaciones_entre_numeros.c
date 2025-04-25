#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Ingrese dos números: ");
    scanf("%d %d", &num1, &num2);

    if (num2 != 0)
    {
        printf("Resultado de la división: %.2f\n", (float)num1 / num2);
    }
    else
    {
        printf("Error: No se puede dividir entre cero.\n");
    }

    printf("Resultado de la suma: %d\n", num1 + num2);
    printf("Resultado de la resta: %d\n", num1 - num2);
    printf("Resultado de la multiplicación: %d\n", num1 * num2);

    return 0;
}
