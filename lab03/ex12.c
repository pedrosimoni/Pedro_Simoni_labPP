#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n, l;

    printf("Digite um numero positivo: ");
    scanf("%f", &n);

    if (n >= 0){
        l = log10(n);
        printf("O logaritmo desse numero na base 10 eh: %f", l);
        return 0;
    } else {
        printf("Numero invalido.");
        return 1;
    }
    return 0;
}