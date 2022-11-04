#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("Digite outro numero: ");
    scanf("%f", &y);

    if (x == y) {
        printf("Os numeros sao iguais.\n");
    } else if (x > y) {
        printf("%f eh o maior numero.\n", x);
    } else {
        printf("%f eh o maior numero.\n", y);
    }
    return 0;
}