#include <stdio.h>

int main()
{
    float c, l, p, custo;
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &c);
    printf("Digite a largura do terreno: ");
    scanf("%f", &l);
    printf("Digite por fim o preco da tela: ");
    scanf("%f", &p);

    custo = (2*c + 2*l)*p;

    printf("O custo para cercar o terreno todo sera: %f reais", custo);

    return 0;
}