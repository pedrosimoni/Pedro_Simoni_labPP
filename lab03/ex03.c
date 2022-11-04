#include <stdio.h>
#include <math.h>

int main()
{
    float x;

    printf("Digite um numero real: ");
    scanf("%f", &x);

    if (x > 0) {
        printf("A raiz quadrada desse numero eh: %f", sqrt(x));
    } else {
        printf("O quadrado desse numero eh: %f", x*x);
    }
    return 0;
}