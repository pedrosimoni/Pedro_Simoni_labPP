#include <stdio.h>

int main()
{
    float vet[5], ma, me;

    for(int i=0; i<5; i++){
        printf("Digite um número: ");
        scanf("%f", &vet[i]);
    }

    ma = vet[0];
    me = vet[0];

    for (int i=1; i<5; i++){
        if (vet[i] > ma){
            ma = vet[i];
        } else {
            me = vet [i];
        }
    }

    printf("O maior valor digitado foi: %f\n", ma);
    printf("O menor valor digitado foi: %f", me);
    
    return 0;
}