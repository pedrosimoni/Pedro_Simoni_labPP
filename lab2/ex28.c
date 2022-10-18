#include <stdio.h>

int main()
{
    float x;
    float y;
    float z;

    printf("Digite um numero real: ");
    scanf("%f", &x);
    printf("Digite outro numero real: ");
    scanf("%f", &y);
    printf("Digite mais um numero real: ");
    scanf("%f", &z);

    printf("A soma dos quadrados dos numeros digitados eh: %f", ((x*x)+(y*y)+(z*z)));

    return 0;

}