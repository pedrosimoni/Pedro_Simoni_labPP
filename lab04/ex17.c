#include <stdio.h>

int main()
{
    int counter, c, z;

    c = 150;
    z = 110;
    counter = 0;

    while (c>=z){
        c = c + 2;
        z = z + 3;
        counter++;
    }

    printf("Ze demorara %d anos para ser mais alto q Chico.", counter);

    return 0; 
}