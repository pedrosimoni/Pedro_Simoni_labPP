#include <stdio.h>

float calc (float n1, char op, float n2)
{   
    switch (op){
        case '+': return n1+n2; break;
        case '-': return n1-n2; break;
        case '*': return n1*n2; break;
        case '/': return n1/n2; break; 
        default: break;
    }
}

int main()
{
    float n1, n2;
    char op;

    printf("Digite uma operacao(x (+, -, *, /) y): ");
    scanf("%f %c %f", &n1, &op, &n2);

    printf("\n%f", calc(n1, op, n2));

    return 0;
}