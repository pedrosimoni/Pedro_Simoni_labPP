#include <stdio.h>

int main()
{
    float volm3;
    float voll;

    printf("Digite um volume em litros: ");
    scanf("%f", &voll);
    printf("\n");

    volm3 = voll/1000;

    printf("O volume correspondente em metros cubicos eh: %f", volm3);

    return 0;
}