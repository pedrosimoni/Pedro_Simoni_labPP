#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("Digite um numero inteiro: ");
    scanf("%i", &x);
    printf("Digite outro numero inteiro: ");
    scanf("%i", &y);

    if (x > y) {
        printf("O maior numero digitado eh: %i\nA diferenca entre os numeros digitados eh: %i", x, x-y);  
    } else {
        printf("O maior numero digitado eh: %i\nA diferenca entre os numeros digitados eh: %i", y, y-x);
    }

    return 0;
}