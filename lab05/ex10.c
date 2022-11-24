#include <stdio.h>

int check (float n1, float n2)
{
    if (n1 > n2){
        return 1;
    } else if (n1 < n2){
        return 2;
    } else {
        return 0;
    }
}

int main()
{
    float n1, n2;
    int t;

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite outro numero: ");
    scanf("%f", &n2);

    t = check(n1, n2);

    if (t==1) {
        printf("%f eh o maior numero.", n1);
    } else if (t==2) {
        printf("%f eh o maior numero.", n2);
    } else {
        printf("Os numeros sao iguais.");
    }

    return 0;
}