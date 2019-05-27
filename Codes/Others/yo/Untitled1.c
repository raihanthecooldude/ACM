#include<stdio.h>
#include<math.h>

int main ()
{
    int zr,zc,n,i,j;

    printf ("Enter how many rows do you want in your matrixes?\n");
    scanf ("%d", &zr);

    printf ("\nEnter how many columns do you want in your matrixes?\n");
    scanf ("%d", &zc);

    int a[zr][zc],b[zr][zc],c[zr][zc],d[zr][zc],e[zr][zc];

    printf ("\nEnter your 1st Matrix's value\n");

    for (i=0;i<zr;i++)
    {
        for (j=0;j<zc;j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }

    printf ("\nEnter your 2nd Matrix's value\n");

    for (i=0;i<zr;i++)
    {
        for (j=0;j<zc;j++)
        {
            scanf ("%d", &b[i][j]);
        }
    }

    for (i=0;i<zr;i++)
    {
        for (j=0;j<zc;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    printf ("\nSummation of these 2 matrixes is\n");
    for (i=0;i<zr;i++)
    {
        printf ("\n");
        for (j=0;j<zc;j++)
        {
            printf ("%d\t", c[i][j]);
        }
        printf ("\n");
    }


    for (i=0;i<zr;i++)
    {
        for (j=0;j<zc;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
        }
    }

    printf ("\nSubstraction of these 2 matrixes is\n");
    for (i=0;i<zr;i++)
    {
        printf ("\n");
        for (j=0;j<zc;j++)
        {
            printf ("%d\t", d[i][j]);
        }
        printf ("\n");
    }


    for (i=0;i<zr;i++)
    {
        for (j=0;j<zc;j++)
        {
            a[i][j]=a[i][j]*a[i][j];
            b[i][j]=b[i][j]*b[i][j];
            e[i][j]=a[i][j]+b[i][j];
        }
    }



    printf ("\nSummation of the square of these 2 matrixes is\n");
    for (i=0;i<zr;i++)
    {
        printf ("\n");
        for (j=0;j<zc;j++)
        {
            printf ("%d\t", e[i][j]);
        }
        printf ("\n");
    }

    return 0;

}
