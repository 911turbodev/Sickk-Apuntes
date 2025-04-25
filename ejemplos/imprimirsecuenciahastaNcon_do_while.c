#include <stdio.h>

int main()
{
    int N, i = 1;

    printf("Ingrese un número N: ");
    scanf("%d", &N);

    do
    {
        printf("%d ", i);
        i += 2;
    } while (i <= N);

    return 0;
}
