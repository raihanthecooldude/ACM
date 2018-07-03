#include<stdio.h>
#include<math.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    if (n==1)
    {
        printf("-1");
    }
    else
    {
        int p[n];
        for (i=0;i<n-1;i++)
        {
            p[i]=i+2;
        }
        p[n-1]=1;

        for (i=0;i<n;i++)
        {
            printf("%d ", p[i]);
        }
    }

    return 0;
}
