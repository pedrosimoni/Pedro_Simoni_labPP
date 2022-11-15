#include <stdio.h>

int main()
{
    int i, n;

    printf("Digite quantos numeros impares voce deseja ver: ");
    scanf("%d", &n);
    n = n*2;

    for (i=0; i<n; i++){
        if (i%2 != 0){
            printf("%d eh impar.\n", i);
        } else {
            
        }
    }

    return 0;
}