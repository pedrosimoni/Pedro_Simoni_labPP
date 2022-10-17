#include <stdio.h>

int main()
{
    float tempC;
    float tempK;

    printf ("Digite uma temperatura em graus Celsius: ");
    scanf ("%f", &tempC);
    printf ("\n");

    tempK = tempC + 273.15;

    printf ("A temperatura correspondente em graus Kelvin eh: %f", tempK);

    return 0;
}