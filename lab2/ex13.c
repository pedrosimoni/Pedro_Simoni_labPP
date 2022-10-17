#include <stdio.h>

int main()
{
    float distkm;
    float distM;

    printf("Digite uma distancia em km: ");
    scanf("%f", &distkm);
    printf("\n");

    distM = distkm/1.61;

    printf("A distancia correspondente em milhas eh: %f", distM);

    return 0;
}