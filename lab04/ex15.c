#include <stdio.h>
#include <math.h>

int main()
{
    float n;

    do {
        printf("Digite um numero(digite 0 ou negativo para encerrar o programa): ");
        scanf("%f", &n);

        if (n>0){  
            printf("O qudradado do numero digitado eh: %f\n", n*n);
            printf("O cubo do numero digitado eh: %f\n", n*n*n);
            printf("A raiz quadrada do numero digitado eh: %f\n", sqrt(n));
        } else {
            printf("Obrigado por usar o programa.");
        }
    } while (n>0);

    return 0;
}