#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;

    printf ("Insira um numero inteiro: ");
    scanf ("%i", &num1);
    printf ("\n");
    printf ("Insira mais um numero inteiro: ");
    scanf ("%i", &num2);
    printf ("\n");
    printf ("Insira mais um numero inteiro: ");
    scanf ("%i", &num3);
    printf ("\n");
    printf ("A soma dos numeros que voce digitou eh: %i", num1+num2+num3);
    
    return 0;
}