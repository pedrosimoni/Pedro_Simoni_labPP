#include <stdio.h>

int main()
{
    int o;
    float x, y;

    printf("1- Soma de 2 números.\n");
    printf("2- Diferença entre 2 números (maior pelo menor).\n");
    printf("3- Produto entre 2 números.\n");
    printf("4- Divisão entre 2 números (o denominador não pode ser zero).\n");
    printf("Escolha a opção: ");    
    scanf("%d", &o);
    
    switch (o) {
        case 1: 
            printf("Digite um valor para x: ");
            scanf("%f", &x);
            printf("Digite um valor para y: ");
            scanf("%f", &y);
            printf("%f + %f = %f", x, y, x+y);
            break;
        case 2:
            printf("Digite um valor para x: ");
            scanf("%f", &x);
            printf("Digite um valor para y: ");
            scanf("%f", &y);
            if (x >= y) {
                printf("%f - %f = %f", x, y, x-y);
            } else {
                printf("%f - %f = %f", y, x, y-x);
            }
            break;
        case 3: 
            printf("Digite um valor para x: ");
            scanf("%f", &x);
            printf("Digite um valor para y: ");
            scanf("%f", &y);
            printf("%f*%f = %f", x, y, x*y);
            break;
        case 4: 
            printf("Digite um valor para o numerador: ");
             scanf("%f", &x);
            printf("Digite um valor para o denominador: ");
            scanf("%f", &y);
            if (y!=0) {
                printf("%f/%f = %f", x, y, x/y);
            } else {
                printf("O denominador nao pode ser zero.");
                return 1;
            }
            break;
        default: printf("Opcao invalida."); break;
    }

    return 0;
}