#include <stdio.h>

int main()
{
    float tempC;
    float tempF;

    printf ("Digite uma temperatura em graus Celsius: ");
    scanf ("%f", &tempC);
    printf ("\n");

    tempF = tempC*(9.0/5.0)+32.0;

    printf ("A temperatura correspondente em graus Fahrenheit eh: %f", tempF);

    return 0;
}