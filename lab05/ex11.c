#include <stdio.h>

float media (float n1, float n2, float n3, char o)
{
    if ((o == 'A') || (o == 'a')){
        return (n1 + n2 + n3)/3;
    } else if ((o == 'P') || (o == 'p')){
        return ((n1*5) + (n2*3) + (n3*2))/10;
    }
}


int main()
{
    float n1, n2, n3, m;
    char tm;

    printf("Digite as 3 notas separadas por virgula(Nota 1, Nota 2, Nota 3): ");
    scanf("%f, %f, %f", &n1, &n2, &n3);
    printf("Qual estilo de media sera usada(A ou P): ");
    scanf(" %c", &tm);

    m = media(n1, n2, n3, tm);

    printf("A media calculada foi: %f", m);

    return 0;
}