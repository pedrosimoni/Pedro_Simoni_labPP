#include <stdio.h>

int main()
{
    float pa, pn;

    printf("Digite o preco antigo do produto: ");
    scanf("%f", &pa);

    if (pa<50) {
        pn = pa*1.05;
        printf("O preco do produto com aumento sera: %.2f reais", pn);
        return 0;
    } else if ((pa>=50) && (pa<=100)) {
        pn = pa*1.1;
        printf("O preco do produto com aumento sera: %.2f reais", pn);
        return 0;
        
    } else {
        pn = pa*1.15;
        printf("O preco do produto com aumento sera: %.2f reais", pn);
        return 0;
    }
}