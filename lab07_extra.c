#include <stdio.h>

int main()
{
    char frase[50];

    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);

    for(int i=0; i<50; i++){
        if(frase[i] == 'r' && frase[i+1] == 'r'){
            frase[i] = 'l';
            for(int j=i+1; j<50; j++){
                frase[j] = frase[j+1];
            }
        }else if(frase[i]=='r'  && frase[i+1]!=' ' && frase[i+1]!='\n'){
            frase[i] = 'l';
        } else if(frase[i]=='R' && frase[i+1]!=' ' && frase[i+1]!='\n'){
            frase[i] = 'L';
        }
    }

    printf("%s", frase);

    return 0;
}