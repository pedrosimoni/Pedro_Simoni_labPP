#include <stdio.h>

int main()
{
    float lab, as, ef, m;

    printf("Insira a sua nota de laboratorio: ");
    scanf("%f", &lab);
    printf("Insira a sua nota da avalaiacao semestral: ");
    scanf("%f", &as);
    printf("Insira a sua nota do exame final: ");
    scanf("%f", &ef);

    m = (2*lab + 3*as + 5*ef)/10;

    if (m >= 0 && m<= 2.9) {
        printf("Voce esta reprovado. E a sua media foi: %.1f", m);
    } else if (m >= 3 && m <= 4.9) {
        printf("Voce esta de recuperacao. E a sua media foi: %.1f", m);    
    } else if (m >= 5 && m <= 10) {
        printf("Voce foi aprovado. E a sua media foi: %.1f", m);
    } else {
        printf("As notas digitadas nao sao validas, insira valores entre 0 e 10");
    }

    return 0;
}