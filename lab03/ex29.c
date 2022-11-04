#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, a, b, g, r, acertos;
    acertos = 0;

    for (i=0; i<5; i++) {
        srand( (unsigned)time(NULL) );
        
        a = rand () % 100;
        b = rand () % 100;
        g = a + b;
        
        printf("Qual eh a soma de %d + %d: ", a, b);
        scanf("%d", &r);

        if (g == r) {
            printf("%d + %d = %d\n", a, b, g);
            acertos++;
        } else {
            printf("%d + %d = %d\n", a, b, g);
        }
    }

    printf("Voce teve %d acertos", acertos);
}