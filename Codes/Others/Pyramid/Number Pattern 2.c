#include <stdio.h>
int main ()
{
    int i,j,k,n;
    printf ("Enter the last line number of the pyramid\n");
    scanf ("%d", &n);
    printf("\n");

    for (i=1; i<=n; i++) {
        for (k=i; k<n; k++){
            printf (" ");
        }
        for (j=1; j<=i; j++) {
            printf ("%d", j);
            printf (" ");
        }
        printf ("\n");
    }
    return 0;
}
