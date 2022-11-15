#include <stdio.h>

int main()
{
    int i;
    float n, s;

    for (i=0; i<10; i++){
        printf("Digite um valor: ");
        scanf("%f", &n);
        s = s + n;
    }
    printf("A soma dos numeros digitados eh: %.2f", s);

    return 0;
}