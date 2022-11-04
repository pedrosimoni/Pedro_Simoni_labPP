#include <stdio.h>

int main()
{
    int n, c;

    printf("Insira o codigo do produto escolhido: ");
    scanf("%d", &c);
    printf("Insira a quantidade pedida do produto: ");
    scanf("%d", &n);

    switch (c) {
        case 100: printf("O valor a ser pago eh: %.2f reais", n*1.2); break;
        case 101: printf("O valor a ser pago eh: %.2f reais", n*1.3); break;
        case 102: printf("O valor a ser pago eh: %.2f reais", n*1.5); break;
        case 103: printf("O valor a ser pago eh: %.2f reais", n*1.2); break;
        case 104: printf("O valor a ser pago eh: %.2f reais", n*1.7); break;
        case 105: printf("O valor a ser pago eh: %.2f reais", n*2.2); break;
        case 106: printf("O valor a ser pago eh: %.2f reais", n*1.0); break;
        default: printf("O codigo inserido nao corresponde com nenhum do cardapio."); break;
    }
}