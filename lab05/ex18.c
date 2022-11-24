#include <stdio.h>

int exp (int x, int z)
{
    int exp = 1;

    for (z; z>0; z--){
        exp *= x;
    }

    return exp;
}

int main()
{
    int x, z, res;
    
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("Digite o expoente desse número: ");
    scanf("%d", &z);

    res = exp(x, z);

    printf("%d^%d = %d.", x, z, res);

    return 0;
}