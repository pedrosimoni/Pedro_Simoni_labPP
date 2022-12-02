#include <stdio.h>

int main()
{
    int num[5][5];
    
    for(int i=0; i<5; i++){
        for(int l=0; l<5; l++){
            if (l == i){
                num[i][l] = 1;
            } else {
                num[i][l] = 0;
            }
        }
    }

    printf("A matriz obtida: \n");

    for(int k=0; k<5; k++){
        for(int w=0; w<5; w++){
            printf("%d", num[k][w]);
        }

        printf("\n");
    }

    return 0;
}