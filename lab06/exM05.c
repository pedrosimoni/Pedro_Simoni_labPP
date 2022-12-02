#include <stdio.h>

int main()
{
    int M[10][10];
    
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(i<j){
                M[i][j] = (2*i) +(7*j) -2;
            }
            else if(i==j){
                M[i][j] = (3*i*i) -1;
            }
            else if(i>j){
                M[i][j] = (4*i*i*i) - (5*j*j) + 1;
            }
        }
    }

    for(int k=0; k<10; k++){
        for(int w=0; w<10;w++){
            printf("%d ",M[k][w]);
        }
        
        printf("\n");
    }

    return 0;
}