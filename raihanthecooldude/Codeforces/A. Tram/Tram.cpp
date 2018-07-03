#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, x=0, y=0;
    scanf("%d", &n);

    int a[n],b[n];
    for (i=0;i<n;i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }

    for (i=0;i<n;i++)
    {
        y=y+b[i]-a[i];
        if(y>x)
        {
            x=y;
        }
    }

    printf("%d\n", x);

    return 0;
}
