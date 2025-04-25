#include <stdio.h>
#include <math.h>

int main()
{
    int opcion;
    printf("Seleccione una opción para calcular el área:\n");
    printf("1. Círculo\n");
    printf("2. Triángulo\n");
    printf("3. Cuadrado\n");
    printf("4. Rectángulo\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    if (opcion == 1)
    {
        float radio, area;
        printf("Ingrese el radio del círculo: ");
        scanf("%f", &radio);
        area = M_PI * radio * radio;
        printf("El área del círculo es: %.2f\n", area);
    }
    else if (opcion == 2)
    {
        float base, altura, area;
        printf("Ingrese la base del triángulo: ");
        scanf("%f", &base);
        printf("Ingrese la altura del triángulo: ");
        scanf("%f", &altura);
        area = (base * altura) / 2;
        printf("El área del triángulo es: %.2f\n", area);
    }
    else if (opcion == 3)
    {
        float lado, area;
        printf("Ingrese el lado del cuadrado: ");
        scanf("%f", &lado);
        area = lado * lado;
        printf("El área del cuadrado es: %.2f\n", area);
    }
    else if (opcion == 4)
    {
        float base, altura, area;
        printf("Ingrese la base del rectángulo: ");
        scanf("%f", &base);
        printf("Ingrese la altura del rectángulo: ");
        scanf("%f", &altura);
        area = base * altura;
        printf("El área del rectángulo es: %.2f\n", area);
    }
    else
    {
        printf("Opción no válida.\n");
    }

    return 0;
}