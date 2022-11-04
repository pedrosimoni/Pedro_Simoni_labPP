#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
        
    printf("Digite um numero inteiro: ");
    scanf("%i", &x);

    if (x%2 == 0) {
        printf("O numero digitado eh par.\n");
    } else {
        printf("O numero digitado eh impar.");
    }
    return 0;
}