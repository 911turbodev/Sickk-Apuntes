#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;

    printf("Ingrese cuatro números: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 <= num2)
    {
        if (num1 <= num3)
        {
            if (num1 <= num4)
            {
                printf("El menor número es: %d\n", num1);
            }
            else
            {
                printf("El menor número es: %d\n", num4);
            }
        }
        else if (num3 <= num4)
        {
            printf("El menor número es: %d\n", num3);
        }
        else
        {
            printf("El menor número es: %d\n", num4);
        }
    }
    else if (num2 <= num3)
    {
        if (num2 <= num4)
        {
            printf("El menor número es: %d\n", num2);
        }
        else
        {
            printf("El menor número es: %d\n", num4);
        }
    }
    else if (num3 <= num4)
    {
        printf("El menor número es: %d\n", num3);
    }
    else
    {
        printf("El menor número es: %d\n", num4);
    }

    return 0;
}
