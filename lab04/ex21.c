#include <stdio.h>

int main()
{
    int n, a, s, teste, b, c;
    teste = 0;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &b);
    printf("Digite o segundo numero: ");
    scanf("%d", &c);
    
    if (b<2){
        s = 1;
    } else {
        s = 0;
    }
    
    for (n=b; n<=c; n+=2){
        for (a=1; a<=n; a++){
            if (n%a==0){
                teste++;
            }
        }
        if (teste==2){
            s++;
            printf("%d eh primo\n", n);
        }

        teste = 0;
    }
    
    printf("Entre %d e %d exitem %d numeros primos.", b, c, s);

    return 0;
}