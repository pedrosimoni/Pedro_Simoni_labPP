#include <stdio.h>

int main()
{
    int n, a, s, teste;
    teste = 0;
    s = 2;
    
    for (n=1; n<=2000000; n+=2){
        for (a=1; a<=n; a++){
            if (n%a==0){
                teste++;
            }
        }
        if (teste==2){
            s += n;
            printf("%d eh primo\n", n);
        }

        teste = 0;
    }
    
    printf("A soma dos numeros primos abaixo de dois milhoes eh: %d", s);

    return 0;
}