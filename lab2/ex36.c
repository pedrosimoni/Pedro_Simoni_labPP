#include <stdio.h>
#define pi 3.141592

int main()
{
    float h;
    float r;
    float v;

    printf("Digite a altura de um cilindro: ");
    scanf("%f", &h);
    printf("Digite o raio da base desse cilindro: ");
    scanf("%f", &r);

    v = (r*r)*h*pi;

    printf("O volume desse cilindro eh: %f", v);

    return 0;
}