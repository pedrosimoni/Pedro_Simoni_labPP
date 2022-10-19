#include <stdio.h>

int main()
{
    int n, x, a1, a2, a3;

    printf("Digite um numero inteiro entre 100 e 999: ");
    scanf("%i", &n);
    
    a1 = n/100;
    a2 = n/10 - (a1*10);
    a3 = n - (n/10)*10;

    x = (a3*100) + (a2*10) + a1;

    printf("O numero formado pelos digitos do numero digitado invertidos eh: %i", x);
    
    return 0;
}