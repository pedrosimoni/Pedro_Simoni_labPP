#include <stdio.h>

int main()
{
    float tempC;
    float tempF;

    printf ("Digite uma temperatura em graus Fahrenheit: ");
    scanf ("%f", &tempF);
    printf ("\n");

    tempC = 5.0*(tempF - 32)/9.0;

    printf ("A temperatura correspondente em graus Celsius eh: %f", tempC);

    return 0;
}