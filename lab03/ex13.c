#include <stdio.h>

int main ()
{
    float p1, p2, p3, m;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &p1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &p2);
    printf("Digite a nota da terceira prova prova: ");
    scanf("%f", &p3);

    m = (p1 + p2 + 2*p3) / 4;

    if (m >= 60) {
        printf("Voce foi aprovado. Sua nota final foi %.2f.", m);
        return 0;
    } else {
        printf("Voce reprovou. Sua nota final foi %.2f.", m);
        return 0;
    }
}