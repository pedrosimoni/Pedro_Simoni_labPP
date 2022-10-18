#include <stdio.h>

int main()
{
    float aream2;
    float areaa;

    printf("Digite um valor de area em Metros Quadrados: ");
    scanf("%f", &aream2);
    printf("\n");

    areaa = aream2*0.000247;

    printf("A area correspondente em Acres eh: %f", areaa);

    return 0;
}