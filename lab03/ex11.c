#include <stdio.h>

int main()
{
    int n, s;
    s = 0;

    printf("Digite um numero inteiro maior que zero: ");
    scanf("%i", &n);

    if (n > 0) {
        while (n > 0) {
            s += n%10;
            n = n/10;
        }
        printf("A soma dos algarismos do numero digitado eh: %i", s);
    } else {
        printf("Numero invalido.");
        
        return 1;
    }
    
    return 0;
}