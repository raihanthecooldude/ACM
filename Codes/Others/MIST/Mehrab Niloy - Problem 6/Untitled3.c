#include<stdio.h>

int main ()
{
    int n,x,y,i,j;

    printf("Enter your number\n");
    scanf("%d", &n);

    printf("\n");

    for (i=0;i<n;i++)
    {
        for (x=1;x<=n-(i+1);x++)
        {
            printf(" ");
        }

        for (y=n-i;y<=n-1;y++)
        {
            printf("%d", y);
        }
        for (j=n;j>=n-i;j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }


    return 0;
}
