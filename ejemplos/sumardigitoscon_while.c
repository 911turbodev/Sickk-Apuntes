#include <stdio.h>

int main()
{
    int num, suma = 0;

    printf("Ingrese un número: ");
    scanf("%d", &num);

    while (num != 0)
    {
        suma += num % 10; // Extrae el último dígito
        num /= 10;        // Elimina el último dígito
    }

    printf("La suma de los dígitos es: %d\n", suma);

    return 0;
}
