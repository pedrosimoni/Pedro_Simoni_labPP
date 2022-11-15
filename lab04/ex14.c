#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n, d1, d2;
    srand( (unsigned)time(NULL) );
    
    printf("Digite quantas vezes voce quer jogar os dados: ");
    scanf("%d", &n);
    
    for (i=1; i<=n; i++){
        d1 = rand () % 6;
        d2 = rand () % 6;

        if (d1>d2){
            printf("No %d° lancamento: Dado 1 > Dado 2.\n", i);
        } else if (d2>d1){
            printf("No %d° lancamento: Dado 1 < Dado 2.\n", i);
        } else {
            printf("No %d° lancamento: Dado 1 = Dado 2.\n", i);
        }
    }
     
    return 0; 
}