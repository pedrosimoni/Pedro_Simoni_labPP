#include <stdio.h>

int main()
{
    float p, a1, a2, a3, t;
    printf("Insira o valor do premio: ");
    scanf("%f", &p);
    printf("Insira o valor que a primeira pessoa contribuiu: ");
    scanf("%f", &a1);
    printf("Insira o valor que a segunda pessoa contribuiu: ");
    scanf("%f", &a2);
    printf("Insira o valor que a terceira pessoa contribuiu: ");
    scanf("%f", &a3);

    t = a1 + a2 + a3;
    
    printf("O valor que a pessoa que contribuiu com %f reais recebera: %f reais\n", a1, (a1/t)*p);
    printf("O valor que a pessoa que contribuiu com %f reais recebera: %f reais\n", a2, (a2/t)*p);
    printf("O valor que a pessoa que contribuiu com %f reais recebera: %f reais\n", a3, (a3/t)*p);

    return 0;
}