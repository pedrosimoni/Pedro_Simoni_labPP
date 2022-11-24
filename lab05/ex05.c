#include <stdio.h>
#define PI 3.1415

float volume(float x)
{
    float v;

    v = (4*PI*x*x*x)/3;
    return v;
}

int main()
{
    float r;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &r);
    printf("O volume da esfera eh: %f", volume(r));

    return 0;
}