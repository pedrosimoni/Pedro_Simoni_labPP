#include <stdio.h>

char teste (float l1, float l2, float l3)
{
    if ((l1>0) && (l2>0) && (l3>0)){
        if ((l1<l2+l3) && (l2<l1+l3) && (l3<l1+l2)){
            if ((l1==l2) && (l1==l3)){
                return 'e';
            } else if ((l1==l2) || (l2==l3) || (l1==l3)) {
                return 'i';
            } else {
                return 's';
            }
        }
    }
}

int main()
{
    float l1, l2, l3;
    char t;
    
    printf("Digite o comprimento de um dos lados do triangulo: ");
    scanf("%f", &l1);
    printf("Digite o comprimento de outro lado do tringulo: ");
    scanf("%f", &l2);
    printf("Digite o comprimento do ultimo lado do trinagulo: ");
    scanf("%f", &l3);

    t = teste(l1, l2, l3);

    switch (t){
        case 'e': printf("O triangulo e equilatero."); break;
        case 'i': printf("O triangulo e isosceles."); break;
        case 's': printf("O triangulo e escaleno."); break;
        default: printf("O triangulo digitado nao existe."); break;
    }

    return 0;
}