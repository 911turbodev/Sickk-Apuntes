#include <stdio.h>

int main()
{
    int num, contador = 0, suma = 0;

    printf("Ingrese números (0 para terminar):\n");

    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        suma += num;
        contador++;
    }

    if (contador > 0)
    {
        printf("El promedio de los números ingresados es: %.2f\n", (float)suma / contador);
    }
    else
    {
        printf("No se ingresaron números.\n");
    }

    return 0;
}
