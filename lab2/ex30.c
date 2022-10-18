#include <stdio.h>

int main()
{
    float real;
    float dolar;
    float cotacao;

    printf("Digite um valor em real: ");
    scanf("%f", &real);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);

    dolar = real/cotacao;
    
    printf("O valor correspondente em dolar eh: %f", dolar);

    return 0;
}