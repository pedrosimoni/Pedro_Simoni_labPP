#include <stdio.h>

int main()
{
    int a, d;
    printf("Digite a sua idade: ");
    scanf("%i", &a);
    printf("Digite o ano atual: ");
    scanf("%i", &d);

    printf("Voce nasceu no ano: %i", d - a);

    return 0;
}