#include <stdio.h>

int main()
{
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano%400 == 0) {
        printf("%d eh bissexto.", ano);
        return 0;
    } else if ((ano%4 == 0) && (ano%100 != 0)) {
        printf("%d eh bissexto.", ano);
        return 0;
    } else {
        printf("%d nao eh bissexto.", ano);
        return 0;
    }
}