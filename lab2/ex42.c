#include <stdio.h>

int main()
{
    float s; //salario base
    float sr; //salario a receber

    printf("Insira o valor do salario base: ");
    scanf("%f", &s);

    sr = s - (s*0.07) + (s*0.05);

    printf("O valor do salario a receber eh: %f", sr);

    return 0;
}