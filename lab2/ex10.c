#include <stdio.h>

int main()
{
    float velkm;
    float velm;

    printf ("Digite uma velocidade em Km/h: ");
    scanf ("%f", &velkm);
    printf ("\n");

    velm = velkm/3.6;

    printf ("A velocidade correspondente em m/s eh: %f", velm);

    return 0;
}