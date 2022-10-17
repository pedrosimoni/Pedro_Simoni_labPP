#include <stdio.h>

int main()
{
    float tempK;
    float tempC;

    printf ("Digite uma temperatura em graus Kelvin: ");
    scanf ("%f", &tempK);
    printf ("\n");

    tempC = tempK - 273.15;

    printf ("A temperatura correspondente em graus Celsius eh: %f", tempC);

    return 0;
}