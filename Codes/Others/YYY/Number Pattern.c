#include <stdio.h>
int main ()
{
    int i,j,n;
    printf ("Enter the highest number of the pattern:");
    scanf ("%d", &n);
    for (i=1; i<=n; i++) {
        for (j=1; j<=i; j++){
            printf ("%d", j);
        }
        printf ("\n");
    }
    for (i=n; i>1; i--) {
        for (j=1; j<=i-1; j++) {
            printf ("%d", j);
        }
        printf ("\n");
    }
    return 0;
}