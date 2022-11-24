#include <stdio.h>
#define PI 3.1415

float vol (float h, float r)
{
    float v;

    v = PI*r*r*h;

    return v;
}





int main()
{
    float h, r;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &h);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);

    printf("O volume do cilindro eh: %f", vol(h, r));

    return 0;
}