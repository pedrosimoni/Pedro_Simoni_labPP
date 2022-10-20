#include <stdio.h>

int main()
{
    float p;

    printf("Digite o valor do produto: ");
    scanf("%f", &p);

    printf("O valor desse produto com desconto de 12%% eh: %f reais", p*0.88);

    return 0;
}
