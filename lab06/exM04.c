#include <stdio.h>

int main()
{
    float M[5][5], x;
    int l, c;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("Digite um valor: ");
            scanf("%f", &M[i][j]);
        }
    }

    printf("Digite um valor a ser encontrado na matriz digitada: ");
    scanf("%f", &x);
    l = -1;
    c = -1;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if (M[i][j] == x){
                l = i;
                c = j;
            }
        }
    }

    if(l == -1){
        printf("Valor não encontrado.\n");
    } else {
        printf("O valor foi encontrado em: %d x %d\n", l, c);
    }

    return 0;
}