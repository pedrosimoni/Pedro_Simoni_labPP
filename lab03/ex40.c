#include <stdio.h>

int main()
{
    float p;
    
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &p);

    if (p<12000) {
        printf("O custo ao consumidor eh: %.2f reais", p + (p*0.05));
        return 0;
    } else if (p>25000) {
        printf("O custo ao consumidor eh: %.2f reais", p + (p*0.15) + (p*0.2));
        return 0;
    } else {
        printf("O custo ao consumidor eh: %.2f reais", p + (p*0.1) + (p*0.15));
        return 0;
    }
}