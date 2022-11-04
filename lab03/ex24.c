#include <stdio.h>

int main()
{
    int estado;
    float preco;

    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    printf("Ecolha uma opcao para o estado:\n");
    printf("1 - Minas Gerais\n");
    printf("2 - Sao Paulo\n");
    printf("3 - Rio de Janeiro\n");
    printf("4 - Mato Grosso do Sul\n");
    scanf("%d", &estado);
    
    switch (estado) {
        case 1: printf("O preco final do produto sera %.2f reais", preco*1.07); break;
        case 2: printf("O preco final do produto sera %.2f reais", preco*1.12); break;
        case 3: printf("O preco final do produto sera %.2f reais", preco*1.15); break;
        case 4: printf("O preco final do produto sera %.2f reais", preco*1.08); break;
        default: printf("A opcao escolhida eh invalida"); break;
    }

    return 0;
}