#include <stdio.h>

int main ()
{
    char operacao;
    float x, y;

    printf("Escolha umas das operacoes basicas da matematica (+, -, *, /): ");
    scanf("%c", &operacao);
    printf("Escolha dois valores agora: ");
    scanf("%f %f", &x, &y);

    switch(operacao) {
        case '+' :
            printf("%f + %f = %f",x, y, x+y);
            break;
        case '-' : 
            printf("%f - %f = %f", x, y, x-y);
            break;
        case '*' :
            printf("%f * %f = %f",x, y, x*y);
            break;
        case '/' :
            printf("%f / %f = %f",x, y, x/y); 
            break;
        default: 
            printf("Escolha umas das quatro operacoes.");
            break;   
    }
    
    return 0;
}