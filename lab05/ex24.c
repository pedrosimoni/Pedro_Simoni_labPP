#include <stdio.h>

void desenho (int h)
{
    int base = 2*h-1;
    
    for (int x=0; x<h; x++){
        for (int y=0; y<=base; y++){
            if (y == h){
                printf("*");
            } else if ((y>=h-x) && (y<=h+x)){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int h;

    printf("Digite qual a altura da pirâmide desejada: ");
    scanf("%d", &h);

    desenho(h);

    return 0;
}