#include <stdio.h>

int soma(int A[6])
{
    int soma;
    soma = A[0] + A[1] + A[5];
    return soma; 
}

void show(int A[6])
{
    for (int i = 0; i < 6; i++){
        printf("Valor da posição %d: %d\n", i, A[i]);
    }
}

int main()
{
    int A[6], somaa;

    for (int i = 0; i < 6; i++){
        printf("Qual o valor desejado para a posição %d: ", i);
        scanf("%d", &A[i]);
    }

    somaa = soma(A);
    printf("O valor das posições 0, 1 e 5 somados é: %d\n", somaa);
    A[4] = 100;

    show(A);

    return 0;
}