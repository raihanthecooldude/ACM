#include<stdio.h>
#include<math.h>

int main ()
{
    int r,c,n,i,j,sum,sq,t;

    printf ("Enter how many rows do you want in your matrix?\n");
    scanf ("%d", &r);

    printf ("\nEnter how many columns do you want in your matrix?\n");
    scanf ("%d", &c);

    int a[r][c];
    sum=0;
    sq=0;

    if (r==c)
    {

        printf ("\nEnter your Matrix's value\n");

        for (i=0;i<r;i++)
        {
            for (j=0;j<c;j++)
            {
                scanf ("%d", &a[i][j]);
            }
        }

        for (i=0,j=0;i<r,j<c;i++,j++)
        {
            sum=sum+a[i][j];
        }

        printf("\nSummation of the diagonal elements of this matrix is %d\n", sum);

        for (i=0,j=0;i<r,j<c;i++,j++)
        {
            a[i][j]=a[i][j]*a[i][j];
            sq=sq+a[i][j];
        }

        printf("\nSummation of squares of the diagonal elements of this matrix is %d\n", sq);


        for (i=0;i<r;i++)
        {
            printf("\n");
            for (j=0;j<c;j++)
            {
                printf("%d\t", a[j][i]);
            }
            printf("\n");

        }

    }

    else
    {
        printf("\nYour input is not a Square matrix\n");
    }

    return 0;
}


