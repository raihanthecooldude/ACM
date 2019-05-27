#include<stdio.h>
#include<math.h>

int main ()
{

    int n,i,j;

    printf("Enter how many line do you want\n");
    scanf("%d", &n);

    for (i=0;i<=n;i++)
    {
        printf("\n");
        for (j=1;j<=i;j++)
        {
            printf("%d", j);
        }
    }

    for (i=(n-1);i>0;i--)
    {
        printf("\n");
        for (j=1;j<i;j++)
        {
            printf("%d", j);
        }
    }

    return 0;
}
