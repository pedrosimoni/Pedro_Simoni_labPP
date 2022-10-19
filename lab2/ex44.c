#include <stdio.h>

int main()
{
    float hd, h, d;

    printf("Insira a altura desejada a ser alcancada, em metros: ");
    scanf("%f", &h);
    printf("Insira a altura de cada degrau, em centimetros: ");
    scanf("%f", &hd);

    d = h/(hd/100);

    printf("Voce devera subir %f degraus", d);
    return 0;
}