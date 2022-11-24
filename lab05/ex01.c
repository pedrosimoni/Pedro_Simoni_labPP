#include <stdio.h>

int dobro (int x)
{
    return 2*x;
}

int main ()
{
    int num; 

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("O dobro do numero digitado eh: %d", dobro(num));
    
    return 0;
}
