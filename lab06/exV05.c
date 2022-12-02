#include <stdio.h>

int main()
{
    float mat[50];
    for (int i=0; i<50; i++){
        mat[i] = (i+5*i)%(i+1);
        printf("Valor da posição %d: %f\n", i, mat[i]);
    }

    return 0;
}