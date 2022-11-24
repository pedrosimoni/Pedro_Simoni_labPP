#include <stdio.h>

int convert(int h,int m,int s){
   int segundos;

   segundos = (h*3600) + (m*60) + s;
}

int main()
{
    int ih ,im ,is;
    printf("Digite as horas(hh:mm:ss): ");
    scanf("%d:%d:%d", &ih, &im, &is);
    
    printf("O valor convertido pra segundos eh: %d", convert(ih , im, is));
    
    return 0;
}

