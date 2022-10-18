#include <stdio.h>

int main()
{
    float distj;
    float distm;

    printf("Digite um comprimento em Metros: ");
    scanf("%f", &distm);
    printf("\n");

    distj = distm/0.91;

    printf("O comprimento correspondente em Jardas eh: %f", distj);

    return 0;
}