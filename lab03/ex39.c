#include <stdio.h>

int main()
{   
   float s, sf;
   int t, b;
   
   printf("Digite o salario do empregado: ");
   scanf("%f" ,&s);
   printf("Digite o tempo de trabalho desse empregado: ");
   scanf("%d", &t);
   
   if (s<=500) {
      sf = s*1.25;
   } else if ((s<=1000) && (s>500)) {
      sf = s*1.2;
   } else if ((s<=1500) && (s>1000)) {
      sf = s*1.15;
   } else if ((s<=2000) && (s>1500)) {
      sf = s*1.1;
   } else {
      sf = s*1.0;
   }

   if (t<1) {
      b = 0;
   } else if ((t>=1) && (t<=3)){
      b = 100;
   } else if ((t>=4) && (t<=6)) {
      b = 200;
   } else if ((t>=7) && (t<=10)) {
      b = 300;
   } else if (t>10) {
      b = 500;
   }

   if ((sf == s) && (b == 0)) {
     printf ("O funcionario nao tem direito a nenhum aumento.");
     return 0;
   } else {
      printf("O salario final reajustado do funcionario eh: %.2f reais", (sf + b));
      return 0;
    }
}