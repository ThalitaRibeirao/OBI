#include <stdio.h>

void main () {
    int N, x1, x2, y1, y2;
    scanf ("%d", &N);
    scanf ("%d%d",&x1, &y1);
    scanf ("%d%d", &x2, &y2);
    if ((1000 >= N >=2) && (1<= x1<= N) &&(1<= x2<= N) && (1<= y1<= N) &&(1<= y2<=N)) { 
        if ((x1 <= N/2) && (x2 > N/2) || (y1<= N/2) && (y2 > N/2)) {
            printf ("S\n");
        }
        else {
            printf ("N\n");
        }
    }
    return 0;
}