#include <stdio.h>

int main()
{
    float num[4][4];
    int soma = 0;

    for(int i=0; i<4; i++){
        for(int l=0; l<4; l++){
           printf("Digite um número: ");
           scanf("%f", &num[i][l]);

           if (num[i][l] > 10){
            soma +=1;
           }
        }
    }

    printf("%d números maiores que 10 foram digitados.\n", soma);

    return 0;
}