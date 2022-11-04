#include <stdio.h>

int main()
{
    float v;

    printf("Digite a venda mensal do vendedor: ");
    scanf("%f", &v);

    if (v>= 100000) {
        printf("A comissao desse vendedor eh: %.2f reais", 700 + (0.16*v));
        return 0;
    } else if ((v<100000) && (v>=80000)) {
        printf("A comissao desse vendedor eh: %.2f reais", 650 + (0.14*v));
        return 0;
    } else if ((v<80000) && (v>=60000)) {
        printf("A comissao desse vendedor eh: %.2f reais", 600 + (0.14*v));
        return 0;
    } else if ((v<60000) && (v>=40000)) {
        printf("A comissao desse vendedor eh: %.2f reais", 550 + (0.14*v));
        return 0;
    } else if ((v<40000) && (v>=20000)) {
        printf("A comissao desse vendedor eh: %.2f reais", 500 + (0.14*v));
        return 0;
    } else {
        printf("A comissao desse vendedor eh: %.2f reais", 400 + (0.14*v));
        return 0;
    }

    return 0;
}