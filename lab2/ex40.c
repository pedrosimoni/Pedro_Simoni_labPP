#include <stdio.h>

int main()
{
    int d;
    float q;

    printf("Insira quantos dias foram trabalhados: ");
    scanf("%i", &d);

    q = d*30*0.92;

    printf("A quantia que sera recebida referente aos %i dias de trabalho sera: %f reais", d, q);

    return 0;
}