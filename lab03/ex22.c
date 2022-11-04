#include <stdio.h>

int main()
{
    int idade, trab;
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite quanto tempo de trabalho voce tem: ");
    scanf("%d", &trab);

    if (idade >= 65) { 
        printf("Voce ja pode aposentar.");
        return 0;
    } else if (trab >= 30) {
        printf("Voce ja pode aposentar.");
        return 0;
    } else if ((idade >= 60) && (trab >= 25)) {
        printf("Voce ja pode aposentar.");
        return 0;
    } else {
        printf("Voce ainda nao pode aposentar.");
        return 0;
    }
    
    return 0;
}