#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, c=0, d=0, x=0, y=10000, e;
    scanf("%d", &n);

    int a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    for (i=0;i<n;i++)
    {
        if (x<a[i])
        {
            x=a[i];
            c=i;
        }
    }

    for (i=0;i<n;i++)
    {
        if (y>=a[i])
        {
            y=a[i];
            d=i;
        }
    }

    if (c>d)
    {
        e=c+n-2-d;
    }
    else if (c<d)
    {
        e=c+n-1-d;
    }

    printf("%d\n", e);

    return 0;
}
