#include <stdio.h>
#include <math.h>

int teste (float x)
{
    int y;

    if (x >= 0){
        y = sqrt(x);
        if (y*y == x){
            return 0;
        } else {
            return 1;
        }
    } else {
        return 1;
    }
}

int main ()
{
    float num;
    
    printf("Digite um numero: ");
    scanf("%f", &num);

    if (teste(num) == 0){
        printf("O numero e um quarado perfeito.");
    } else {
        printf("O numero nao e um quadrado perfeito.");
    }

    return 0;
}