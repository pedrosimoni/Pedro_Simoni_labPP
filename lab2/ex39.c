#include <stdio.h>
#define p 780000
int main()
{
    float p1;
    float p2;
    float p3;
    p1 = p*0.46;
    p2 = p*0.32;
    p3 = p - p1 - p2;

    printf("O primeiro ganhador recebera: %f\nO segundo ganhador recebera: %f\nO terceiro ganhador recebera: %f", p1, p2, p3);

    return 0;
}