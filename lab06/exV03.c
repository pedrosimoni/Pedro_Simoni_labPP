#include <stdio.h>

int main()
{
    int vet[6];

    for(int i=0; i<6; i++){
        printf("Digite um número: ");
        scanf("%d", &vet[i]);
    }

    for (int l=5; l>=0; l--){
        printf("%d\n", vet[l]);
    }

    return 0;
}   