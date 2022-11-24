#include <stdio.h>

int fsoma (int x, int y)
{
    int soma2 = 0;
    
    if (x>y){
        y += 1;
        for (y; y < x; y++){
            soma2 += y;
        }
    }
    else if (y>x){
        x +=1;
        for (x; x < y; x++){
            soma2 += x;
        }
    }
    return soma2;
}

int main()
{
    int x, y, soma;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &x);
    printf("Digite outro número inteiro positivo: ");
    scanf("%d", &y);

    soma = fsoma(x, y);

    if (x>y){
        printf("A soma dos números inteiros entre %d e %d é %d", y, x, soma);
    } else if (y>=x){
        printf("A soma dos números inteiros entre %d e %d é %d", x, y, soma);
    }

    return 0;
}