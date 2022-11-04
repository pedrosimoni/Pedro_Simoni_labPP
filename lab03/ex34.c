#include <stdio.h>

int main()
{
    float nota;
    int falta;
    char conceito;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    printf("Digite a quantidade de faltas do aluno: ");
    scanf("%d", &falta);

    if ((nota>=9) && (nota<=10)) {
        conceito = 'A';
    } else if ((nota>=7.5) && (nota<=8.9)) {
        conceito = 'B';
    } else if ((nota>=5) && (nota<=7.4)) {
        conceito = 'C';
    } else if ((nota>=4) && (nota<=4.9)) {
        conceito = 'D';
    } else if ((nota>=0) && (nota<=3.9)) {
        printf("O coneito desse aluno eh E");
        return 0;
    } else {
        printf("A nota inserida eh invalida.");
    }

    if (falta>20) {
        conceito = conceito + 1;
        printf("O conceito desse aluno eh %c", conceito);
    } else {
        printf("O conceito desse aluno eh %c", conceito);
    }
    
    return 0;
}