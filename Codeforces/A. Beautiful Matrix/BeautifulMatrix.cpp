#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int a[5][5], i, j, n, x;

    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            scanf("%d", &n);

            if (n==1)
            {
                x=abs(i-2)+abs(j-2);
                break;
            }
        }
    }

    printf("%d", x);

    return 0;
}
