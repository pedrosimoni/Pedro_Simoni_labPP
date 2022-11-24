#include <stdio.h>

int primo (int n)
{
    int half;
    half = n/2;

    if ((n==2) || (n==3) || (n==5) || (n==7)){
        return 1;
    }
    if ((n==0) || (n==1) || !(n%2) || !(n%3) || !(n%5) || !(n%7)){
        return 0;
    }

    for (int x=2; x<=half; x++){
        if (!(n%x)){
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n, numprimos;
    
    printf("Digite um número: ");
    scanf("%d",&n);
    
    for(int i=0; i<n; i++){
        numprimos += primo(i);
    }
    printf("Existem %d primos abaixo de %d\n", numprimos, n);
    
    return 0;
}