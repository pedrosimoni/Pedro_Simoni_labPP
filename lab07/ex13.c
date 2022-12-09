#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], strrev[100];
    int w = 0, t, counter = 0;

    printf("Digite um string: ");
    fgets(str, 100, stdin);

    for(int i=0; i<strlen(str); i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] += 32;
        }else if(str[i] == ' ' || str[i] == '.' || str[i] == '-' || str[i] == ',' || str[i] == ';' || str[i] == ':' || str[i] == '?' || str[i] == '!'){
            for(int j=i; j<strlen(str); j++){
                str[j] = str[j+1];
            }
        }
    }
    
    strcpy(strrev, str);
    
    w = (strlen(str) - 2);
    t = w + 1;
    
    for(int i=0; i<t; i++){
        if(str[i] == strrev[w]){
            counter++;
        }
        
        w--;
    }

    if(counter == t){
        printf("A fase é um palíndromo.\n");
    }else{
        printf("A frase não é um palíndromo.\n");
    }
    
    return 0;
}