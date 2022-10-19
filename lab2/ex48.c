#include <stdio.h>

int main()
{
    int n, s, m, h;
    printf("Digite um valor inteiro em segundos: ");
    scanf("%i", &n);

    h = n/3600;
    m = (n%3600)/60;
    s = (n%3600)%60;

    printf("O valor de segundos digitado representa: %02i:%02i:%02i", h, m, s);
    
    return 0;
}