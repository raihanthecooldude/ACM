#include<stdio.h>

int main ()
{
    int x,y,n,i,j,k,l,a,b,c,d;

    printf("Enter your number");
    printf("\n");
    scanf("%d", &n);

    printf("\n");


    for (x=1;x<=n;x++)
    {
        printf("%d", x);
    }
    for (y=n-1;y>=1;y--)
    {
        printf("%d", y);
    }


    printf("\n");


    for (i=n-1;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d", j);
        }

        for (k=1;k<=(2*(n-i))-1;k++)
        {
            printf(" ");
        }

        for (l=i;l>=1;l--)
        {
            printf("%d", l);
        }

        printf("\n");
    }




    for (a=2;a<=n-1;a++)
    {
        for (b=1;b<=a;b++)
        {
            printf("%d", b);
        }

        for (c=1;c<=(2*(n-a))-1;c++)
        {
            printf(" ");
        }

        for (d=a;d>=1;d--)
        {
            printf("%d", d);
        }

        printf("\n");
    }




    for (x=1;x<=n;x++)
    {
        printf("%d", x);
    }
    for (y=n-1;y>=1;y--)
    {
        printf("%d", y);
    }

    printf("\n");
    printf("\n");

    return 0;
}
