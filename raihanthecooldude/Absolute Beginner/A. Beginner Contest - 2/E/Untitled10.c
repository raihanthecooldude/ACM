#include <stdio.h>
#include<math.h>

int main()
{
    int a[5][5], i , j, x;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]!=0)
            {
                x=abs(i-2)+abs(j-2);
            }
        }
    }
    printf("%d", x);

    return 0 ;
}
