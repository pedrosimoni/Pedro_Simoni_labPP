#include <stdio.h>

int consumo (float km, float l)
{
    float consumo = km/l;

    if (consumo < 8){
        return 1;
    } else if ((consumo >= 8) && (consumo <=14)){
        return 2;
    } else {
        return 3;
    }
}

int main()
{
    float km, l;
    int cons;

    printf("Digite quantos km tiveram o percurso: ");
    scanf("%f", &km);
    printf("Quantos litros de gasolina foram gastos nesse percurso: ");
    scanf("%f", &l);

    cons = consumo(km, l);

    if (cons == 1){
        printf("Venda o carro!\n");
    } else if (cons == 2){
        printf("Econômico!\n");
    } else {
        printf("Super econômico!\n");
    }

    return 0;
}