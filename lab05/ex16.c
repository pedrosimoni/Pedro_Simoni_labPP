#include <stdio.h>

void desenha_linha(int x)
{
    int n;
    for (n=1; n<=x; n++){
        printf("=");
    }
}

int main()
{
    int x;

    printf("Quantas vezes voce deseja escrever '=' ? ");
    scanf("%d", &x);

    desenha_linha(x);

    return 0;
}