#include <stdio.h>
#include <math.h>

float hip (float cat1, float cat2)
{
    float hip;

    hip = sqrt(cat1*cat1 + cat2*cat2);

    return hip;
}
int main ()
{
    float cat1, cat2;
    
    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cat1);
    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cat2);

    printf("O valor da hipotenusa eh: %f", hip(cat1, cat2));

    return 0;
}