#include <stdio.h>

int main()
{
    float B, b, h, a;

    printf("Digite o comprimento da base menor: ");
    scanf("%f", &b);
    printf("Digite o comprimento da base maior: ");
    scanf("%f", &B);
    printf("Digite o comprimento da base maior: ");
    scanf("%f", &h);

    if ((b > 0) && (B > 0) && (h > 0)) {
        a = (b + B)*h/2;
        printf("A area do trapezio eh: %.2f", a); 
    } else {
        printf("Lembre-se a base maior, base menor e a altura devem ser números maiores que zero");
    }

    return 0;
}