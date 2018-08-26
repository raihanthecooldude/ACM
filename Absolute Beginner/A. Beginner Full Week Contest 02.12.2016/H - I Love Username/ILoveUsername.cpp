#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, j, c=0, d, e;
    scanf("%d", &n);

    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=1;i<n;i++)
    {
        d=0;
        e=0;
        for(j=0;j<i;j++)
        {
            if (a[i]>a[j])
            {
                d++;
            }
            else if (a[i]<a[j])
            {
                e++;
            }

            if (d==i || e==i)
            {
                c++;
            }
        }

    }

    printf("%d\n", c);

    return 0;
}
