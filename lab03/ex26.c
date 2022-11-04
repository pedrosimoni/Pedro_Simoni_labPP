#include <stdio.h>

int main()
{
    float km, l;

    printf("Quantos km foi o percurso percorrido: ");
    scanf("%f", &km);
    printf("Quantos litros o carro consumiu nesse percurso: ");
    scanf("%f", &l);

    if (km/l < 8) {
        printf("Venda o carro!");
        return 0;
    } else if ((km/l >= 8) && (km/l <= 14)) {
        printf("Economico!");
        return 0;
    } else {
        printf("Super economico!");
        return 0;
    }
}