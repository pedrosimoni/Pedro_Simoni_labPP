#include <stdio.h>

int main()
{
    int num1, num2, p1, p2, mp, mn1, mn2, unidade, dezena, centena, milhar, dmilhar, cmilhar;

    mp = 0;

    for (num1=999; num1>=100; num1--){
        for (num2=999; num2>=100; num2--){
            p1 = num1*num2;
            
            unidade = p1/100000;
            dezena = ((p1/10000) - (unidade*10))*10;
            centena = ((p1/1000) - (unidade*100) - (dezena))*100;
            milhar = ((p1/100) - (unidade*1000) - (dezena*10) - (centena/10))*1000;
            dmilhar = ((p1/10) - (unidade*10000) - (dezena*100) - (centena) - (milhar/100))*10000;
            cmilhar = ((p1) - (unidade*100000) - (dezena*1000) - (centena*10) - (milhar/10) - (dmilhar/1000))*100000;
            
            p2 = unidade + dezena + centena + milhar + dmilhar + cmilhar;
            
            if ((p1 == p2) && (p1 > mp)){
                mp = p1;
                mn1 = num1;
                mn2 = num2;
            }
        }
    }

    printf("%d*%d = %d que eh o maior palindromo formado a partir do produto de dois numeros de 3 digitos.", mn1, mn2, mp);
    
    return 0;
}
