#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char sub;
    int counter = 0;

    printf("Digite uma frase: ");
    fgets(str, 100, stdin);
    printf("Digite uma letra para substituir as vogais: ");
    scanf("%c", &sub);

    for(int i=0; i<strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            counter++;
            str[i] = sub;
        }
    }

    printf("A frase tinha %d vogais.\n", counter);
    printf("%s", str);

    return 0;
}