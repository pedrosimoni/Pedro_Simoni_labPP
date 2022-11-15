#include <stdio.h>

int main()
{
    int i, n, contador;
    float m;

    for (i=0; i<10; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d", &n);

        if (n>0){
            m = m + n;
            contador++;
        } else{}
        
    }

    printf("A media dos numeros digitados ignorando os nao positivos eh: %.2f", m/contador);

    return 0;
}