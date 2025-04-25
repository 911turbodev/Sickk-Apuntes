#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5;

    printf("Ingrese cinco números: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            if (num1 >= num4)
            {
                if (num1 >= num5)
                {
                    printf("El mayor número es: %d\n", num1);
                }
                else
                {
                    printf("El mayor número es: %d\n", num5);
                }
            }
            else if (num4 >= num5)
            {
                printf("El mayor número es: %d\n", num4);
            }
            else
            {
                printf("El mayor número es: %d\n", num5);
            }
        }
        else if (num3 >= num4)
        {
            if (num3 >= num5)
            {
                printf("El mayor número es: %d\n", num3);
            }
            else
            {
                printf("El mayor número es: %d\n", num5);
            }
        }
        else if (num4 >= num5)
        {
            printf("El mayor número es: %d\n", num4);
        }
        else
        {
            printf("El mayor número es: %d\n", num5);
        }
    }
    else if (num2 >= num3)
    {
        if (num2 >= num4)
        {
            if (num2 >= num5)
            {
                printf("El mayor número es: %d\n", num2);
            }
            else
            {
                printf("El mayor número es: %d\n", num5);
            }
        }
        else if (num4 >= num5)
        {
            printf("El mayor número es: %d\n", num4);
        }
        else
        {
            printf("El mayor número es: %d\n", num5);
        }
    }
    else if (num3 >= num4)
    {
        if (num3 >= num5)
        {
            printf("El mayor número es: %d\n", num3);
        }
        else
        {
            printf("El mayor número es: %d\n", num5);
        }
    }
    else if (num4 >= num5)
    {
        printf("El mayor número es: %d\n", num4);
    }
    else
    {
        printf("El mayor número es: %d\n", num5);
    }

    return 0;
}
