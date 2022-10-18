#include <stdio.h>

int main()
{
    float n1;
    float n2;
    float n3;
    float n4;
        
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    printf("A media aritimetica das notas digitadas eh: %f", ((n1 + n2 + n3 + n4)/4));

    return 0;
}