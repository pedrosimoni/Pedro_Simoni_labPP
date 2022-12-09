#include <stdio.h>
#include <string.h>

int main()
{
    char carros[5][50];
    float consumo[5];
    int mem;

    for(int i=0; i<5; i++){
        printf("Digite um modelo de carrro: ");
        fgets(carros[i], 50, stdin);
        printf("Digite o consumo desse modelo: ");
        scanf("%f", &consumo[i]);
        setbuf(stdin, NULL);
    }

    mem = 0;
    for(int i=1; i<5; i++){
        if(consumo[i]>consumo[mem]){
            mem = i;
        }
    }
    
    printf("O modelo mais econômico é %s e ele consome %.2f litros para percorrer 1000 quilômetros.", carros[mem], 1000.0/consumo[mem]);

    return 0;
}