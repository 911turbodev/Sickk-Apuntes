#include <stdio.h>

int main()
{
    int a, b;

    // Pedir al usuario dos números de una cifra en base 7
    printf("Ingrese el primer número (0 a 6): ");
    scanf("%d", &a);

    printf("Ingrese el segundo número (0 a 6): ");
    scanf("%d", &b);

    // Verificar que estén en el rango permitido
    if (a < 0 || a > 6 || b < 0 || b > 6)
    {
        printf("Error: los números deben estar entre 0 y 6 (base 7).\n");
        return 1;
    }

    // Sumar en decimal
    int sumaDecimal = a + b;

    // Convertir a base 7 (como son una cifra, la suma puede ser de hasta 12)
    int digitoAlta = sumaDecimal / 7;
    int digitoBaja = sumaDecimal % 7;

    // Mostrar resultado
    if (sumaDecimal < 7)
    {
        printf("Resultado en base 7: %d\n", digitoBaja);
    }
    else
    {
        printf("Resultado en base 7: %d%d\n", digitoAlta, digitoBaja);
    }

    return 0;
}
