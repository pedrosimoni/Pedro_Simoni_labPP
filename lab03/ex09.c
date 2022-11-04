#include <stdio.h>

int main ()
{
    float s, parc;

    printf("Digite o salario: ");
    scanf("%f", &s);
    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f", &parc);

    if (parc > s*0.2) {
        printf("Emprestimo nao concedido");
    } else {
        printf("Emprestimo concedido");
    }
    
    return 0;
}