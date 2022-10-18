#include <stdio.h>

int main()
{
    float aream2;
    float areah;

    printf("Digite um valor de area em Metros Quadrados: ");
    scanf("%f", &aream2);
    printf("\n");

    areah = aream2*0.0001;

    printf("O valor de area correspondente em Hectares eh: %f", areah);

    return 0;
}