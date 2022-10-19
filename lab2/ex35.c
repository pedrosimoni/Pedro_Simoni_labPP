#include <stdio.h>
#include <math.h>

int main()
{
    float c1;
    float c2;
    float h;

    printf("Digite o valor do cateto de um triangulo retangulo: ");
    scanf("%f", &c1);
    printf("Digite o valor do outro cateto desse triangulo: ");
    scanf("%f", &c2);
    
    h = sqrt((c1*c1) + (c2*c2));
    
    printf("O valor da hipotenusa desse triangulo retangulo eh: %f", h);

    return 0;
}