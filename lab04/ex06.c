#include <stdio.h>

int main()
{
    int i, n;
    float m;

    for (i=0; i<10; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &n);
        m = m + n;
    }

    printf("A media dos numeros digitados eh: %.2f", m/10.0);

    return 0;
}