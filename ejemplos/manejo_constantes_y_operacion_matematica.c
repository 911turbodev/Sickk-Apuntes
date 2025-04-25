#include <stdio.h>
#define FACTOR 0.5

int main()
{
    float base, altura;
    printf("Ingrese base y altura del triángulo: ");
    scanf("%f %f", &base, &altura);
    printf("Área: %.2f\n", FACTOR * base * altura);
    return 0;
}