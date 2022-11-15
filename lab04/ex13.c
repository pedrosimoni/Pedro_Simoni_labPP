#include <stdio.h>

int main()
{
    int n, s;

    s = 0;
    n = 1000;
    while (n>0){
        n--;
        if (n%3 == 0 || n%5 == 0){
            s += n;
        }
    }

    printf("A soma de todos os numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5 eh: %d", s);

    return 0;
}