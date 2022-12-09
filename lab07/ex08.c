#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], l1, l2;

    printf("Digite uma frase: ");
    fgets(str, 100, stdin);
    printf("Digite uma letra para ser substituida: ");
    scanf(" %c", &l1);
    printf("Digite qual letra substituirá essa letra: ");
    scanf(" %c", &l2);

    for(int i=0; i<strlen(str); i++){
        if(str[i] == l1){
            str[i] = l2;
        }
    }
    
    printf("%s", str);

    return 0;
}