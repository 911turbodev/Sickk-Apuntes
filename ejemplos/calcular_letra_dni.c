#include <stdio.h>

int main()
{
    int dni;
    char letras[] = {'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D',
                     'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L',
                     'C', 'K', 'E'};

    // Pedir al usuario el número de DNI
    printf("Introduce el número del DNI: ");
    scanf("%d", &dni);

    // Calcular la letra del DNI
    if (dni >= 0)
    {
        int residuo = dni % 23;
        printf("La letra del DNI es: %c\n", letras[residuo]);
    }
    else
    {
        printf("Número de DNI no válido.\n");
    }

    return 0;
}
