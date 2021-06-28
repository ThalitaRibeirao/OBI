#include <stdio.h>
int main () {
    char resultado;
    int i, pontuacao = 0, grupo = -1;
    for (i = 0; i < 12; i++) {
        scanf ("%c", &resultado);
        if (resultado == 'V') {
            pontuacao++;
        } 
    }
    switch (pontuacao) {
        case 1:
        grupo = 3;
        break;
        case 2:
        grupo = 3;
        break;
        case 3:
        grupo = 2;
        break;
        case 4:
        grupo = 2;
        break;
        case 5:
        grupo = 1;
        break;
        case 6:
        grupo = 1;
        break;
    }
    printf ("%d\n", grupo);
   return 0;
}