#include <stdio.h>

#define PI 3.1416

int main()
{
    float radio, area;

    printf("Calculadora de área de círculo\n");
    printf("Ingrese el radio: ");
    scanf("%f", &radio);

    area = PI * radio * radio;

    printf("El área es: %f\n", area);
    return 0;
}