#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, d;
    printf("Digite as coordenadas de um ponto no plano cartesiano (x,y): ");
    scanf("(%f,%f)", &x, &y);

    d = sqrt((x*x) + (y*y));

    printf("A distancia do ponto dado para a origem eh de: %f unidades", d);

    return 0;
}