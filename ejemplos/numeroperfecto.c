#include <stdio.h>
// Un número perfecto es aquel que es igual a la suma de sus divisores propios (todos los divisores excluyendo el mismo número).
// Por ejemplo, el número 6 es perfecto porque sus divisores son 1, 2 y 3, y 1 + 2 + 3 = 6.
int main()
{
    int num, suma = 0, i = 1;

    do
    {
        printf("Ingrese un número entero positivo: ");
        scanf("%d", &num);

        if (num <= 0)
        {
            printf("Por favor, ingrese un número positivo.\n");
        }
    } while (num <= 0);

    // Calcular la suma de los divisores propios
    while (i < num)
    {
        if (num % i == 0)
        {
            suma += i;
        }
        i++;
    }

    if (suma == num)
    {
        printf("%d es un número perfecto.\n", num);
    }
    else
    {
        printf("%d no es un número perfecto.\n", num);
    }

    return 0;
}
