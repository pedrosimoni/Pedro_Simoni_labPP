#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &b);
    printf("Digite mais um numero inteiro: ");
    scanf("%d", &c);

    printf("A ordem crescente dos numeros eh: ");

    if ((a<b) && (a<c) && (b<c)) {
        printf("%d, %d, %d.", a, b, c);
        return 0;
    } else if ((a<b) && (a<c) && (c<b)) {
        printf("%d, %d, %d.", a, c, b);
        return 0;
    } else if ((b<a) && (b<c) && (a<c)) {
        printf("%d, %d, %d.", b, a, c);
        return 0;
    } else if ((b<c) && (b<a) && (c<a)) {
        printf("%d, %d, %d.", b, c, a);
        return 0;
    } else if ((c<a) && (c<b) && (a<b)) {
        printf("%d, %d, %d.", c, a, b);
        return 0;
    } else if ((c<a) && (c<b) && (b<a)){
        printf("%d, %d, %d.", c, b, a);
        return 0;
    } else if ((a == b) && (b<c)){
        printf("%d, %d, %d.", a, b, c);
    } else if ((a == c) && (c<b)){
        printf("%d, %d, %d.", a, c, b);
    } else {
        printf("%d, %d, %d.", b, c, a);
    }
    
    return 0;
}