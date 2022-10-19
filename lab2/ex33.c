#include <stdio.h>

int main()
{
    float l;

    printf("Digite o tamanho do lado de um quadrado: ");
    scanf("%f", &l);

    printf("A area do quadrado cujo lado eh o numero digitado vale: %f", l*l);

    return 0;
}