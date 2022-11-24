#include <stdio.h>

int soma (int num)
{
    int a, soma;
    soma = 0;
    
    while (num > 0){
        a = num%10;
        num = num/10;
        soma += a;
    }

    return soma;
}

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num > 0){
        printf("A soma de todos os seus algarismos eh: %d", soma(num));
        return 0;
    } else {
        printf("Numero invalido.");
        return 1;
    }
}