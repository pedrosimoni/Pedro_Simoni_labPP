#include <stdio.h>

int main()
{
    float v;
    float h;
    float q;

    printf("Insira o valor da hora de trabalho: ");
    scanf("%f", &v);
    printf("Insira a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &h);

    q = h*v*1.1;

    printf("O valor a ser pago ao funcionario eh: %f reais", q);

    return 0;
}