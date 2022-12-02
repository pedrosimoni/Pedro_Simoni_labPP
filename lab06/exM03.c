#include <stdio.h>

int main()
{
    float M[4][4], ma;
    int im, jm;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("Digite um valor: ");
            scanf("%f", &M[i][j]);
        }
    }
    ma = M[0][0];
    im = 0;
    jm = 0;
    
    for(int k=0; k<4; k++){
        for(int w=0; w<4; w++){
            if(M[k][w] > ma){
                ma = M[k][w];
                im = k;
                jm = w;
            }
        }
    }
    
    for(int q=0; q<4; q++){
        for(int z=0; z<4; z++){
            printf("%f ",M[q][z]);
        }
        
        printf("\n");
    }

    printf("A posição do maior número foi %d x %d\n", im, jm);

    return 0;
}