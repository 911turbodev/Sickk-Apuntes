#include <stdio.h>
#include <math.h>

int main()
{
    char tipo;
    float area, lado, base, altura, lado2, lado3;

    // Pedir el tipo de triángulo
    printf("Introduce el tipo de triángulo (E - equilátero, I - isósceles, S - escaleno): ");
    scanf(" %c", &tipo);

    if (tipo == 'E' || tipo == 'e')
    {
        // Triángulo equilátero
        printf("Introduce el lado del triángulo equilátero: ");
        scanf("%f", &lado);
        area = (sqrt(3) / 4) * lado * lado;
        printf("El área del triángulo equilátero es: %.2f\n", area);
    }
    else
    {
        if (tipo == 'I' || tipo == 'i')
        {
            // Triángulo isósceles
            printf("Introduce la base del triángulo isósceles: ");
            scanf("%f", &base);
            printf("Introduce la altura del triángulo isósceles: ");
            scanf("%f", &altura);
            area = (base * altura) / 2;
            printf("El área del triángulo isósceles es: %.2f\n", area);
        }
        else
        {
            if (tipo == 'S' || tipo == 's')
            {
                // Triángulo escaleno
                printf("Introduce el primer lado del triángulo escaleno: ");
                scanf("%f", &lado);
                printf("Introduce el segundo lado del triángulo escaleno: ");
                scanf("%f", &lado2);
                printf("Introduce el tercer lado del triángulo escaleno: ");
                scanf("%f", &lado3);

                // Usando la fórmula de Herón
                float s = (lado + lado2 + lado3) / 2; // semiperímetro
                area = sqrt(s * (s - lado) * (s - lado2) * (s - lado3));
                printf("El área del triángulo escaleno es: %.2f\n", area);
            }
            else
            {
                printf("Tipo de triángulo no válido.\n");
            }
        }
    }

    return 0;
}
