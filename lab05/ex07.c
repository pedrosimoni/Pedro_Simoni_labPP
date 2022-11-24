#include <stdio.h>

float convert (float c)
{
    float f;

    f = c * (9.0/5.0) + 32.0;

    return f;
}

int main()
{
    float c;

    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &c);

    printf("A temperatura em graus Fahrenheit eh: %f", convert(c));

    return 0;
}