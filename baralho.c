#include <stdio.h>
#include <string.h>
int main () {
    char caracteres [53];
    int C1 [53], E1 [53], U1 [53], P1 [53];
    int tamanho, i, C = 0, E = 0, U = 0, P = 0, j;
    gets (caracteres);
    tamanho = strlen (caracteres);

     for (i= 2; i < tamanho; i+=3) {
         printf ("%c\n", (caracteres[i]));
        if (caracteres [i] == 'C') {
            C++;
        }
        if (caracteres [i] == 'E') {
            E++;
        }
        if (caracteres [i] == 'U') {
            U++;
        }
        if (caracteres [i] == 'P') {
            P++;
        }
     }
    C= 13 - C;
    E = 13 - E;
    U = 13 - U;
    P = 13 - P;
    printf ("%d\n%d\n%d\n%d\n", C , E, U, P);
    return 0;
}