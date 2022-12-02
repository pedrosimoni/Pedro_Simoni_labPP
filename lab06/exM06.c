#include <stdio.h>

int main()
{
    int m1[4][4], mt[4][4];

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("Digite um valor entre 1 e 20: ");
            scanf("%d", &m1[i][j]);
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if (j > i){
                mt[i][j] = 0;
            } else {
                mt[i][j] = m1[i][j];
            }
        }
    }
    printf("Matriz original: \n");

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", m1[i][j]);
        }
        
        printf("\n");
    }

    printf("Matriz triangular: \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", mt[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}