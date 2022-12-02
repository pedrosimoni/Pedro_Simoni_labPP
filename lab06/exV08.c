#include <stdio.h>

int main()
{
   float num[10];

   for(int i=0; i<10; i++){
        printf("Digite um número: ");
        scanf("%f", &num[i]);
        
        for(int l=0; l<i; l++){
            while (num[i] == num[l]){
                printf("Digite um número diferente dos que já foram digitados: ");
                scanf("%f", &num[i]);
            }
        }
   } 
    printf("O vetor final ficou: ");

    for (int k=0; k<10; k++){
        printf("\n%f", num[k]);
    }

    return 0;
}