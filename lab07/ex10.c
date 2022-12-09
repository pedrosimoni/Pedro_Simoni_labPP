#include <stdio.h>
#include <string.h>

int main()
{
    char produto[100];
    float valor, desconto;

    printf("Digite o nome do produto: ");
    fgets(produto, 100, stdin);
    printf("Digite o valor desse produto: ");
    scanf("%f", &valor);

    desconto = valor*0.1;

    printf("O produto %s tem valor total %.2f reais, mas se for pago à vista terá um desconto de %.2f reais, ficando %.2f reais com o desconto à vista.\n", produto, valor, desconto, (valor - desconto));

    return 0;
}