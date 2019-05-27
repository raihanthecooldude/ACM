#include<stdio.h>
#include<math.h>

int main()
{
    int k, l, m, n, d, x, c=0;
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);

    for(x=1;x<=d;x++)
    {
        if (x%k==0 || x%l==0 || x%m==0 || x%n==0)
        {
            c++;
        }
    }

    printf("%d\n", c);

    return 0;
}
