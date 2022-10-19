#include <stdio.h>

int main()
{
    int n, a1, a2, a3, a4;

    printf("Digite um numero inteiro entre 1000 e 9999: ");
    scanf("%i", &n);

    a1 = n/1000;
    a2 = n/100 - (a1*10);
    a3 = n/10 - (a1*100) - (a2*10);
    a4 = n - (a1*1000) - (a2*100) - (a3*10);

    printf("%i\n%i\n%i\n%i\n", a1, a2, a3, a4);

    return 0;
}