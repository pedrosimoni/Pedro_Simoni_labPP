#include <stdio.h>

int main()
{
    float velkm;
    float velm;

    printf ("Digite uma velocidade em m/s: ");
    scanf ("%f", &velm);
    printf ("\n");

    velkm = velm*3.6;

    printf ("A velocidade correspondete em Km/h eh: %f", velkm);

    return 0;
}