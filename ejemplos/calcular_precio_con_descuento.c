#include <stdio.h>

int main()
{
    char tipo_cliente;
    float precio = 100.0, descuento, precio_final;

    // Pedir al usuario el tipo de cliente
    printf("Introduce el tipo de cliente (E - Estudiante, J - Jubilado, O - Otro): ");
    scanf(" %c", &tipo_cliente);

    // Aplicar el descuento basado en el tipo de cliente
    if (tipo_cliente == 'E' || tipo_cliente == 'e')
    {
        descuento = 0.20; // 20% de descuento
    }
    else
    {
        if (tipo_cliente == 'J' || tipo_cliente == 'j')
        {
            descuento = 0.30; // 30% de descuento
        }
        else
        {
            descuento = 0.10; // 10% de descuento
        }
    }

    // Calcular el precio final
    precio_final = precio - (precio * descuento);
    printf("El precio final después del descuento es: %.2f\n", precio_final);

    return 0;
}
