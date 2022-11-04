#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, rq, r1, r2;
    
    printf("ax2 + bx + = 0\n");
    printf("Digite um valor para 'a': ");
    scanf("%f", &a);
    printf("Digite um valor para 'b': ");
    scanf("%f", &b);
    printf("Digite um valor para 'c': ");
    scanf("%f", &c);

    delta = b*b - 4*a*c;

    if (delta < 0) {
        printf("Nao exite raiz real para a equacao");
        return 0;
    } else if (delta == 0) {
        rq = sqrt(delta);
        r1 = (-b + rq)/2*a;
    
        printf("A unica raiz possivel para a equcao eh: %.2f", r1);
    } else {
        rq = sqrt(delta);
        r1 = (-b + rq)/2*a;
        r2 = (-b - rq)/2*a;

        printf("A equacao tem duas raizes. %.2f e %.2f", r1, r2);
    }
    
    return 0;
}