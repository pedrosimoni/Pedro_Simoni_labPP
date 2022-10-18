#include <stdio.h>

int main()
{
    float distp;
    float distcm;

    printf("Digite um comprimento em polegadas: ");
    scanf("%f", &distp);
    printf("\n");

    distcm = distp*2.54;

    printf("O comprimento correspondente em centimetros eh: %f", distcm);

    return 0;
}