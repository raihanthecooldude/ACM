#include <stdio.h>
int main ()
{
    int a[2][2], b[2][2], c[2][2];
    int i, j, m = 0, k;
    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
        scanf ("%d", &a[i][j]);
        }
    }
    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
        scanf ("%d", &b[i][j]);
        }
    }
    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            for (k=0; k<2; k++){
                m = a[i][k] * b[k][j];
                m = m+m;
            }
            c[i][j] = m;
            m=0;
        }
    }

    printf ("Result:\n");
    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
        printf ("%d\t", c[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
