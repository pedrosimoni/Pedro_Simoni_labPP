#include <stdio.h>

int main()
{
    float volm3;
    float voll;

    printf("Digite um volume em metros cubicos: ");
    scanf("%f", &volm3);
    printf("\n");

    voll = volm3*1000;

    printf("O volume correspondente em litros eh: %f", voll);

    return 0;
}