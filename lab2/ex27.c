#include <stdio.h>

int main()
{
    float aream2;
    float areah;

    printf("Digite um valor de area em Hectares: ");
    scanf("%f", &areah);
    printf("\n");

    aream2 = areah*10000;

    printf("O valor de area correspondente em Metros Quadrados eh: %f", aream2);

    return 0;
}