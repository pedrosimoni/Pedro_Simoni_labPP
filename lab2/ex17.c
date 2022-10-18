#include <stdio.h>

int main()
{
    float distcm;
    float distp;

    printf("Digite um comprimento em centimetros: ");
    scanf("%f", &distcm);
    printf("\n");

    distp = distcm/2.54;

    printf("O comprimento correspondente em polegadas eh: %f", distp);

    return 0;
}