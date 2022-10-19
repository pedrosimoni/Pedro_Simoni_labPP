#include <stdio.h>
#define pi 3.141592

int main()
{
    float r;
    float area;

    printf("Digite o tamanho do raio de um circulo: ");
    scanf("%f", &r);

    area = (r*r)*pi;

    printf("A area do circulo cujo raio eh o valor digitado eh: %f", area);

    return 0;
}