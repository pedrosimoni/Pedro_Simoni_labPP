#include <stdio.h>

int main()
{
    int l, n, i, a;

    printf("Quantas linhas voce deseja que o Triangulo de Floyd tenha: ");
    scanf("%d", &l);

    n = 1;

    for (i=1; i<=l; i++){
        for (a=1; a<=i; a++){
            printf("%d  ", n);
            n++;
        }
        printf("\n");
    }

    return 0;
}