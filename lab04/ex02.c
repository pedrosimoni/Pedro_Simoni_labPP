#include <stdio.h>


int main()
{
    int i, w, d;

    printf("Usando for: ");
    for (i=1; i<=100; i++)
    {
        if (i!=100){
            printf("%d, ", i);
        } else {
            printf("%d.\n", i);
        }
    }

    printf("Usando while: ");
    w = 1;
    while (w<=100) {
        if (w!=100){
            printf("%d, ", w);
        } else {
            printf("%d.\n", w);
        }
        w++;
    }

    printf("Usando do-while: ");
    d = 1;
    do {
        if (d!=100){
            printf("%d, ", d);
        } else {
            printf("%d.\n", d);
        }
        
        d++;
    } while (d<=100);

    return 0;
}