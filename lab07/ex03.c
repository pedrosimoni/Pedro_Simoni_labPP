#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Digite uma frase: ");
    fgets(str, 100, stdin);

    for(int i=strlen(str); i>=0; i--){
        printf("%c", str[i]);
    }

    return 0;
}