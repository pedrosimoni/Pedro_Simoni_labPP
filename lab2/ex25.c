#include <stdio.h>

int main()
{
    float aream2;
    float areaa;

    printf("Digite um valor de area em Acres: ");
    scanf("%f", &areaa);
    printf("\n");

    aream2 = areaa*4048.58;

    printf("O valor de area correspondente em Metros Quadrados eh: %f", aream2);

    return 0;
}