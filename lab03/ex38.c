#include <stdio.h>
#define at 2022

int main ()
{
    int d, m, a;

    printf("Digite uma data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &d, &m, &a);
    
    if (a <= at ) {
        if ((m==1) || (m==3) || (m==5) || (m==7) || (m==10) || (m==12)) {
            if ((d>0) && (d<=31)) {
                printf("A data eh valida.");
                return 0;
            } else {
                printf("A data eh invalida.");
                return 0;
            }
        } else if ((m==4) || (m==6) || (m==9) || (m==11)) {
           if ((d>0) && (d<=30)) {
                printf("A data eh valida.");
                return 0;
            } else {
                printf("A data eh invalida.");
                return 0;
            } 
        } else if (m == 2) {
            if (a%400 == 0) {
                if ((d>0) && (d<=29)) {
                    printf("Data valida.");
                    return 0;
                } else {
                    printf("Data invalida.");
                    return 0;
                }
            } else if ((a%4 == 0) && (a%100 != 0)) {
                if ((d>0) && (d<=29)) {
                    printf("Data valida.");
                    return 0;
                } else {
                    printf("Data invalida.");
                    return 0;
                }
            } else {
                if ((d>0) && (d<=28)) {
                    printf("Data valida.");
                    return 0;
                } else {
                    printf("Data invalida.");
                    return 0;
                }
            }
        } else {
            printf("Data invalida.");
            return 0;
        }
    } else {
        printf("Data invalida.");
        return 0;
    }
}