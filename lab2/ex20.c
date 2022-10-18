#include <stdio.h>

int main()
{
    float pesokg;
    float pesolb;

    printf("Digite um peso em quilograma: ");
    scanf("%f", &pesokg);
    printf("\n");

    pesolb = pesokg/0.45;

    printf("O peso correspondente em libras eh: %f", pesolb);

    return 0;
}