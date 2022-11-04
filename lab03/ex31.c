#include <stdio.h>

int main()
{
    float h, p;

    printf("Digite sua altura: ");
    scanf("%f", &h);
    printf("Digite seu peso: ");
    scanf("%f", &p);

    if (h < 1.2) {
        if (p < 60) {
            printf("Voce esta classificada como A.");
        } else if ((p>=60) && (p<=90)) {
            printf("Voce esta classificada como D.");
        } else {
            printf("Voce esta classificada como G.");
        }
    } else if ((h>=1.2) && (h<= 1.7)) {
        if (p < 60) {
            printf("Voce esta classificada como B.");
        } else if ((p>=60) && (p<=90)) {
            printf("Voce esta classificada como E.");
        } else {
            printf("Voce esta classificada como H.");
        }
    } else {
        if (p < 60) {
            printf("Voce esta classificada como C.");
        } else if ((p>=60) && (p<=90)) {
            printf("Voce esta classificada como F.");
        } else {
            printf("Voce esta classificada como I.");
        }
    }
    return 0;
}