#include <stdio.h>

int main()
{
    int n;

    printf("Digite um valor inteiro: ");
    scanf("%i", &n);

    printf("O antecessor desse numero eh: %i\n", n-1);
    printf("O sucessor desse numero eh: %i\n", n+1);
    
    return 0;
}