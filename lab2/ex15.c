#include <stdio.h>
#define pi 3.1415922

int main()
{
    float angg;
    float angr;

    printf("Digite um angulo em radianos: ");
    scanf("%f", &angr);
    printf("\n");

    angg = angr*180/pi;
    
    printf("O angulo correspondente em radianos eh: %f", angg);

    return 0;
}