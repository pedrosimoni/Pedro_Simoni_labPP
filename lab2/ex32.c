#include <stdio.h>

int main()
{
    int x;
    int calc;

    printf("Digite um numero inteiro: ");
    scanf("%i", &x);

    calc = ((x*3 + 1) + (x*2 - 1));

    printf("A soma do sucessor do triplo com o antecessor do dobro do numero digitado eh: %i", calc);
    
    return 0;
}