#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Digite uma frase: ");
    fgets(str, 100, stdin);

    for(int i=0; i<strlen(str); i++){
        if(str[i]>='a' && str[i]<'x' || str[i]>='A' && str[i]<'X'){
            str[i] += 3;
        } else if(str[i]>='x' && str[i]<='z' || str[i]>='X' && str[i]<='Z'){
            str[i] -= 23;
        }
    }

    printf("%s", str);

    return 0;
}