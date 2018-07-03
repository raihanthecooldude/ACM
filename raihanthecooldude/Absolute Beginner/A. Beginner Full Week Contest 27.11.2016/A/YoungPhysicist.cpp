#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,a=0,b=0,c=0;
    scanf("%d", &n);

    int x[n],y[n],z[n];
    for (i=0;i<n;i++)
    {
        scanf("%d %d %d", &x[i], &y[i], &z[i]);
    }

    for (i=0;i<n;i++)
    {
        a=a+x[i];
        b=b+y[i];
        c=c+z[i];
    }

    if (a==0 && b==0 && c==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
