#include<stdio.h>
#include<math.h>
int b[1000000]={0};

int main()
{
    int n, i, j, r, x=0;

    scanf("%d", &n);

    int a[n];

    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    for (i=0;i<n;i++)
    {
        if (a[i]>x)
        {
            x=a[i];
        }
    }

    for (i=0;i<n;i++)
    {
        if (a[i]>0)
        {
            j=a[i];
            b[j-1]=1;
        }
    }

    for (i=0;i<1000000;i++)
    {
        if (b[i]==1)
        {
            r=i;
        }
    }


    if (r!=0)
    {
        printf("%d\n", r);
    }
    else
    {
        printf("%d\n", x+1);
    }

    return 0;
}
