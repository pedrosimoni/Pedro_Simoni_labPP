#include <stdio.h>

int main()
{
    int i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &i);

    if ((i%3 == 0) && (i%15 > 0)){
        printf("%d eh divisivel por 3 mas nao por 5.", i);
        return 0;
    } else if ((i%5 == 0) && (i%15 > 0)) {
        printf("%d eh divisivel por 5 mas nao por 3.", i);
        return 0;    
    } else if (i%15 == 0) {
        printf("%d eh divisivel simultaneamente por 3 e por 5.", i);
        return 0;
    } else {
        printf("%d nao eh divisivel por 3 nem por 5");
        return 0;
    }
}