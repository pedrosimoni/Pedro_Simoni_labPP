#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Digite uma frase: ");
    fgets(str, 100, stdin);

    printf("%s", str);

    return 0;
}