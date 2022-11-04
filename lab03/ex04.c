#include <stdio.h>
#include <math.h>

int main()
{
    float x, rx, qx;

    printf("Digite um numero: ");
    scanf("%f", &x);
    if (x>0) {
        rx = sqrt(x);
        qx = x*x;
        printf("A raiz quadrada desse numero eh: %f\nO numero ao quadrado eh: %f", rx, qx);   
    } else {
        printf("Tente digitar um numero positivo.");
    }
    return 0;
}