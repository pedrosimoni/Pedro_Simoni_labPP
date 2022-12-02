#include <stdio.h>

int primo (int n)
{
    int half;
    half = n/2;

    if ((n==2) || (n==3) || (n==5) || (n==7)){
        return n;
    }
    if ((n==0) || (n==1) || !(n%2) || !(n%3) || !(n%5) || !(n%7)){
        return 0;
    }

    for (int x=2; x<=half; x++){
        if (!(n%x)){
            return 0;
        }
    }

    return n;
}

int main()
{
    int num[10], n;

    for(int i=0; i<10; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &num[i]);
    }

    printf("Os números primos são: ");

    for(int l=0; l<10; l++){
        n = primo(num[l]);
        
        if (n != 0){
            printf("%d ", n);
        }
    }

    return 0;
}