#include <stdio.h>

void leitura (float x[8])
{
    for (int i = 0; i<8; i++){
        printf("Digite um número para a posição %d: ", i);
        scanf("%f", &x[i]);
    }
}

int main()
{
    int x, y;
    float mat[8], soma;

    leitura(mat);

    printf("Digite uma posição do vetor: ");
    scanf("%d", &x);
    printf("Digite outra posição do vetor: ");
    scanf("%d", &y);

    soma = mat[x] + mat[y];

    printf("A soma da posição %d e da posição %d do vetor eh : %f", x, y, soma);

    return 0;
}