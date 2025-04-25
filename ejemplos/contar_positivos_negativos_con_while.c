#include <stdio.h>

int main()
{
    int num, positivos = 0, negativos = 0;

    printf("Ingrese números (0 para terminar):\n");

    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        if (num > 0)
        {
            positivos++;
        }
        else
        {
            negativos++;
        }
    }

    printf("Cantidad de números positivos: %d\n", positivos);
    printf("Cantidad de números negativos: %d\n", negativos);

    return 0;
}
