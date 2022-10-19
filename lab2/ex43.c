#include <stdio.h>

int main()
{
    float p;

    printf("Insira o valor do produto: ");
    scanf("%f", &p);

    printf("Com 10%% de desconto o valor do produto ficara: %f reais\n", p*0.9);
    printf("O valor de cada parcela se o produto for divido em 3 sera: %f reais\n", p/3);
    printf("Se o produto for pago a vista a comissao do vendedor sera: %f reais\n", p*0.9*0.05);
    printf("Se o produto for parcelado a comissao do vendedor sera: %f reais\n", p*0.05);

    return 0;
}