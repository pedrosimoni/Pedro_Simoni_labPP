#include <stdio.h>

int main()
{
    float n1, n2;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10) {
        printf("As notas digitadas sao invalidas.\n");
        return 0;
    } else {
        printf("A media das notas digitadas eh %f", (n1+n2)/2);
    }

    return 0;
}