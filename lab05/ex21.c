#include <stdio.h>

void desenho (int n)
{
    for (int x=0; x<=n; x++){
        for (int y=0; y<x; y++){
            printf("!");
        }
        printf("\n");
    }
}

int main()
{
    int n;

    printf("Digite quantas linhas você deseja ter no desenho: ");
    scanf("%d", &n);

    desenho(n);

    return 0;
} 