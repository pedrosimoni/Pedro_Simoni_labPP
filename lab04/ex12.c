#include <stdio.h>

int main()
{
    int n, s, x;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    x = n/2;
    s = 0;

    while(x>0){
        if (n%x == 0){
            s = s + x;
            x--;
        } else {
            x--;
        }
    }

    printf("A soma de todos os divisores desse numero eh: %d", s);

    return 0;
}