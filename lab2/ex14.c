#include <stdio.h>
#define pi 3.141592

int main()
{
    float angg;
    float angr;

    printf("Digite um angulo em graus: ");
    scanf("%f", &angg);
    printf("\n");

    angr = angg*pi/180;

    printf("O angulo correspondente em radianos eh: %f", angr);

    return 0;
}