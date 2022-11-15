#include <stdio.h>

int main()
{
    float si, s, aumento1, aumento;
    int ano, ano_final;

    si = 2000;
    aumento1 = 15.0/100;
    s = si + aumento1*si;
    aumento = ( aumento1*si)*2;
    ano_final = 2022;
    
    for (ano=1997; ano<ano_final; ano++){
        s = s + aumento;
        aumento *= 2;
    }

    printf("Em %d o salario do funcionario eh %.2f reais.", ano, s);

    return 0;
}