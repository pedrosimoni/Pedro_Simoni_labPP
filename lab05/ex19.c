#include <stdio.h>

int fatorial (int x)
{
    if (x == 0){
        return 1;
    } else {
        return x*fatorial(x-1);
    }
}

int main()
{
    int x, fat;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &x);

    if (x>=0){
        fat = fatorial(x);
        printf("O fatorial do número digitado é: %d", fat);
    } else {
        printf("O número digitado precisa ser inteiro e positivo.");
    }

    return 0;
}