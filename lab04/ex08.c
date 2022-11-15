#include <stdio.h>

int main()
{
    int i;
    float n, n1, n2, ma, me;

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite um numero: ");
    scanf("%f", &n2);
    
    if (n1>n2){
        ma = n1;
        me = n2;
    }else{ 
        ma = n2;
        me = n1;
    }

    for (i=0; i<8; i++){
        printf("Digite um numero: ");
        scanf("%f", &n);

        if (n > ma)
            ma = n;
        else if (n < me)
            me = n;
        else{}

    }

    printf("O maior numero digitado foi %.2f e o menor foi %.2f", ma, me);

    return 0;
}