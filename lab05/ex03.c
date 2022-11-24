#include <stdio.h>

int teste (float x)
{
    if (x > 0){
        return 1;
    } else if (x < 0){
        return -1;
    } else {
        return 0;
    }
}

int main ()
{
    float num;
    
    printf("Digite um numero: ");
    scanf("%f", &num);

    printf("%d", teste(num));

    return 0;
}