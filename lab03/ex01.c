#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("Digite outro numero: ");
    scanf("%f", &y);

    if (x>y) {
        printf("O numero %f eh maior que o numero %f.", x, y);
    } else {
        printf("O numero %f eh maior que o numero %f.", y, x);
    }
    return 0;
}