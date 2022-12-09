#include <stdio.h>
#include <string.h>

int main()
{
    int counter = 0;
    char str[100];

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    for(int i=0; i<strlen(str); i++){
        if(str[i] == '1'){
            counter++;
        }
    }    

    printf("A string tem %d 1's.\n", counter);

    return 0;
}