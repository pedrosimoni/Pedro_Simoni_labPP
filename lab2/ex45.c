#include <stdio.h>

int main()
{
    char l;

    printf("Digite uma letra maiscula: ");
    scanf("%c", &l);

    printf("A letra minuscula eh: %c", l + 32);

    return 0;
}