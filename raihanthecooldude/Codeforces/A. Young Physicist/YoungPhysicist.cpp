#include<stdio.h>
#include<math.h>

int main()
{
    int i, n, x, y, z, p=0, q=0, r=0;

    scanf("%d", &n);

    for (i=0;i<n;i++)
    {
        scanf("%d %d %d", &x, &y, &z);

        p=p+x;
        q=q+y;
        r=r+z;
    }

    if (p==0 && q==0 && r==0)
    {
        printf("YES\n");
    }
    else
    {
            printf("NO\n");
    }

    return 0;
}
