#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;

    printf("Digite um numero positivo: ");
    scanf("%f", &x);

    if (x>0) {
        printf("A raiz quadrada desse numero eh: %f", sqrt(x));
    } else {
        printf("O numero digitado eh invalido");
    }
    return 0;
}