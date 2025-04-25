#include <stdio.h>

int main()
{
    int lista[10], numero, i, contador = 0;

    printf("Ingrese 10 números:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &lista[i]);
    }

    printf("Ingrese el número a buscar: ");
    scanf("%d", &numero);

    i = 0;
    while (i < 10)
    {
        if (lista[i] == numero)
        {
            contador++;
        }
        i++;
    }

    printf("El número %d aparece %d veces en la lista.\n", numero, contador);

    return 0;
}
