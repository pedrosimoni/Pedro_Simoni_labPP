#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Digite um valor para A: ");
    scanf("%f", &a);
    printf("Digite um valor para B: ");
    scanf("%f", &b);
    printf("Digite um valor para C: ");
    scanf("%f", &c);

    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        if ((a == b) && (a == c)) {
            printf("ABC forma um triangulo equilatero");
        } else if ((a == b) || (a == c) || (b==c)) {
            printf("ABC forma um triangulo isoceles.");
        } else if ((a != b) && (a != c) && (b != c)) {
            printf("ABC forma um triangulo escaleno.");
        } else {
            return 1;
        }
    } else {
        printf("ABC nao forma um triangulo. ");
    }
    
    return 0;
}