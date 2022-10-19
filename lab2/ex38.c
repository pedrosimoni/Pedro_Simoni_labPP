#include <stdio.h>

int main()
{
    float as; //antigo salario
    float ns; //novo salario

    printf("Digite o valor do salario antigo: ");
    scanf("%f", &as);

    ns = as*1.25;

    printf("O valor do salario apos o aumento eh: %f", ns);

    return 0;
}