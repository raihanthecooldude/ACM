#include<stdio.h>
#include<math.h>

int main()
{
    int x,n,i,j;

    printf("Enter your base\n");
    scanf("%d", &x);

    printf("Enter highest power\n");
    scanf("%d", &n);

    j=0;

    for (i=1;i<=n;i++)
    {
        j=j+pow(x,i);
    }


    printf("\n\nSummation is = %d\n", j);

    return 0;
}
