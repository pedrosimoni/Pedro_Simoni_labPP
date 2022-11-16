#include <stdio.h>

int main()
{
    float n1, n2;
    int o;

    do {
        printf("1-Adicao\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n5-Saida\nEscolha uma opcao: ");
        scanf("%d", &o);

        switch(o){
            case 1: 
                printf("Digite o primeiro numero da soma: ");
                scanf("%f", &n1);
                printf("Digite o segundo numero da soma: ");
                scanf("%f", &n2);
                printf("\nRESULTADO: %.2f + %.2f = %.2f\n\n", n1, n2, n1+n2);
                break;    
            case 2:
                printf("Digite o primeiro numero da subtracao: ");
                scanf("%f", &n1);
                printf("Digite o segudo numero da subtracao: ");
                scanf("%f", &n2);
                printf("\nRESULTADO: %.2f - %.2f = %.2f\n\n", n1, n2, n1-n2);
                break;        
            case 3:
                printf("Digite o primeiro numero da multiplicacao: ");
                scanf("%f", &n1);
                printf("Digite o segundo numero da multiplicacao: ");
                scanf("%f", &n2);
                printf("\nRESULTADO: %.2f * %.2f = %.2f\n\n", n1, n2, n1*n2);
                break;
            case 4: 
                printf("Digite o primeiro numero da divisao: ");
                scanf("%f", &n1);
                printf("Digite o segundo numero da divisao: ");
                scanf("%f", &n2);
                printf("\nRESULTADO: %.2f/%.2f = %.2f\n\n", n1, n2, n1/n2);
                break;
            case 5: 
                break;
            default:
                printf("A opcao digitada eh invalida.\n");
                break;
        }
    } while (o!=5);
    
    return 0;
}
