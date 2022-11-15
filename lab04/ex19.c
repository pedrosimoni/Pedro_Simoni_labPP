#include <stdio.h>

int main()
{
    int saque, cem, cinquenta, vinte, dez, cinco, dois, um;    
    cem = cinquenta = vinte = dez = cinco = dois = um = 0;

    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    while (saque>=100){
        saque -= 100;
        cem++;
    }
    while (saque>=50){
        saque -= 50;
        cinquenta++;
    }
    while (saque>=20){
        saque -= 20;
        vinte++;
    }
    while (saque>=10){
        saque -= 10;
        dez++;
    }
    while (saque>=5){
        saque -= 5;
        cinco++;
    }
    while (saque>=2){
        saque -= 2;
        dois++;
    }
    while (saque>=1){
        saque -= 1;
        um++;
    }

    printf("Serao utilizadas %d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2 e %d notas de 1.", cem, cinquenta, vinte, dez, cinco, dois, um);

    return 0;
}