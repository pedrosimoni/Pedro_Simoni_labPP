#include <stdio.h>

int main()
{
    int n, hd, md, sd, d, h, m, s;
    printf("Digite a hora atual (hh:mm:ss): ");
    scanf("%02i:%02i:%02i", &h, &m, &s);
    printf("Digite a duracao da experiencia biologica em segundos: ");
    scanf("%i", &n);

    hd = n/3600;
    md = (n%3600)/60;
    sd = (n%3600)%60;
    s += sd;
    m = m + md + (s/60);
    h = h + hd + (m/60);
    d = h/24;
    h = h%24;
    m = m%60;
    s = s%60;

    if (d > 0) {
        printf("O termino do experimento sera %i dia(s) depois as %02i:%02i:%02i", d, h, m, s);
    } else 
        printf("O termino do experimento sera as %02i:%02i:%02i", h, m, s);

    return 0;
}