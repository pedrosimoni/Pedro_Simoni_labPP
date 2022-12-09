#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], strcp[100];
    int i, j, w;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    printf("Digite a posição de começo do segmento: ");
    scanf("%d", &i);
    printf("Digite a posição de final do segmento: ");
    scanf("%d", &j);
    w = 0;
    for(i; i<=j; i++){
        strcp[w] = str[i];
        w++;
    }

    printf("%s", strcp);

    return 0;
}