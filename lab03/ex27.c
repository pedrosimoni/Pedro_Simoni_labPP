#include <stdio.h>

int main()
{
    int i;

    printf("Digite a idade do nadador: ");
    scanf("%d", &i);

    if (i>=5 && i<=7) {
        printf("O nadador se encaixa na categoria Infantil A.");
        return 0;
    } else if (i>=8 && i<=10) {
        printf("O nadador se encaixa na categoria Infantil B.");
        return 0;
    } else if (i>=11 && i<=13) {
        printf("O nadador se encaixa na categoria Juvenil A.");
        return 0;
    } else if (i>=14 && i<= 17) {
        printf("O nadador se encaixa na categoria Juvenil B.");
        return 0;
    } else if (i>=18) {
        printf("O nadador se encaixa na categoria Senior.");
        return 0;
    } else {
        printf("O nadador eh muito novo para qualquer categoria.");
        return 0;
    }   
}