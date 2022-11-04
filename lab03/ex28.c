#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, z, o;
    float mp, mh, ma;

    printf("1 - Media Geometrica\n");
    printf("2 - Media Ponderada\n");
    printf("3 - Media Harmonica\n");
    printf("4 - Media Aritimetica\n");
    printf("Escolha uma media: ");
    scanf("%d", &o);
    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);
    printf("Digite o terceiro valor: ");
    scanf("%d", &z);

    switch (o) {
        case 1: 
            printf("A Media Geometrica dos valoreds digitados eh: %.2f", cbrt(x*y*z)); 
            break;
        case 2: 
            mp = (1*x + 2*y + 3*z)/6.0;
            printf("A Media Ponderada dos valores digitados eh: %.2f", mp); 
            break;
        case 3:    
            
            mh = 1/((1.0/(float)x) + (1.0/(float)y) + (1.0/(float)z));
            printf("A Media Harmonica dos valores digitados eh: %f", mh); 
            break;
        case 4:    
            ma = (x + y + z)/3.0;
            printf("A Media Aritimetica dos valores digitados eh: %.2f", ma); 
            break;
        default: printf("Opcao invalida"); break;
    }
    return 0;
}