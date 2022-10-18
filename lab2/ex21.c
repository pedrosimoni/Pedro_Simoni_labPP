#include <stdio.h>

int main()
{
    float pesokg;
    float pesolb;

    printf("Digite um peso em libras: ");
    scanf("%f", &pesolb);
    printf("\n");

    pesokg = pesolb*0.45;

    printf("O peso correspondente em quilogramas eh: %f", pesokg);

    return 0;
}