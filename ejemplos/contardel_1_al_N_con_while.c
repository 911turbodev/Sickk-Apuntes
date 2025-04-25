#include <stdio.h>

int main()
{
    int N, i = 1;

    printf("Ingrese un número N: ");
    scanf("%d", &N);

    while (i <= N)
    {
        printf("%d ", i);
        i++;
    }

    return 0;
}
