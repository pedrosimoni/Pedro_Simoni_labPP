#include <stdio.h>

int main()
{
    int contagem;

    contagem = 10;
    while (contagem >= 0){
        printf("%d, ", contagem);
        contagem --;
    }
    printf("FIM!");
    
    return 0;
}