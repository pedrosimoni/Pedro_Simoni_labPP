#include <stdio.h>

int main()
{
    float distkm;
    float distM;

    printf ("Digite uma distancia em milhas: ");
    scanf ("%f", &distM);
    printf ("\n");

    distkm = distM*1.61;

    printf ("A distancia correspondente em quilometros eh: %f", distkm);

    return 0;
}