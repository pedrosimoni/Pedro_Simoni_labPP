#include <stdio.h>

int main()
{
    float h, p;
    char s;

    printf("Insira o seu sexo (m ou h): ");
    s = getchar();
    printf("Digite a sua altura: ");
    scanf("%f", &h);
    
    if (s == 'h') {
        p = (72.7*h) - 58.0;
        printf("O peso ideal para sua altura eh: %f", p);
    } else if (s == 'm') {
        p = (62.1*h) - 44.7;
        printf("O peso ideal para sua altura eh: %f", p);
    } else {
        printf("Input para sexo nao reconhecido.");
    }

    return 0;
}