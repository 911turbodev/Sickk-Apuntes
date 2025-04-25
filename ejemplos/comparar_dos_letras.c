#include <stdio.h>

int main()
{
    char l1, l2;

    printf("Ingrese la primera letra: ");
    scanf(" %c", &l1);

    printf("Ingrese la segunda letra: ");
    scanf(" %c", &l2);

    if ((l1 >= 'A' && l1 <= 'Z') || (l1 >= 'a' && l1 <= 'z'))
    {
        if ((l2 >= 'A' && l2 <= 'Z') || (l2 >= 'a' && l2 <= 'z'))
        {
            if (l1 == l2)
            {
                printf("Las letras son iguales.\n");
            }
            else if (l1 > l2)
            {
                printf("La primera letra es mayor que la segunda.\n");
            }
            else
            {
                printf("La segunda letra es mayor que la primera.\n");
            }
        }
        else
        {
            printf("La segunda entrada no es una letra.\n");
        }
    }
    else
    {
        printf("La primera entrada no es una letra.\n");
    }

    return 0;
}
