#include <stdio.h>

int main()
{
    float distj;
    float distm;

    printf("Digite um comprimento em Jardas: ");
    scanf("%f", &distj);
    printf("\n");

    distm = distj*0.91;

    printf("O comprimento correspondente em metros eh: %f", distm);

    return 0;
}