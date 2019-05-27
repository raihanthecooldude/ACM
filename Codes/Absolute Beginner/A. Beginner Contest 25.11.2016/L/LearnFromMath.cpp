#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,n;

    scanf("%d", &n);

    x=n/2;
    while (x%2!=0)
    {
        x=x+1;
    }

    y=n-x;

    printf("%d  %d\n",x, y);

    return 0;
}
