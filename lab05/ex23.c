#include <stdio.h>

void desenho (int h)
{
    for (int x=0; x<=h; x++){
        for (int y=0; y<x; y++){
            printf("*");
        }
        printf("\n");
    }

    for (int z=(h-1); z>0; z--){
        for (int y=0; y<z; y++){
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int h;
    
    printf("Digite a largura desejada para o seu triângulo: ");
    scanf("%d", &h);

    desenho(h);

    return 0;
}