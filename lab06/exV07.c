#include <stdio.h>

int main()
{
    int soma, impares = 0, num[6];

    for(int i=0; i<6; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &num[i]);
    }

    for(int l=0; l<6; l++){
        if (num[l]%2 == 0){
            printf("%d é par. \n", num[l]);
            soma += num[l];
        } else {
            printf("%d é ímpar. \n", num[l]);
            impares += 1;
        }
    }

    printf("A soma dos números pares digitados foi: %d.\n", soma);
    printf("%d números ímpares foram digitados.\n", impares);

    return 0;

}