#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int i=1,T,a,b,x,m,n;

    scanf("%d", &T);
    while(i<=T)
    {
        scanf("%d %d", &a, &b);
        m=a-b;
        n=abs(m);
        x=(n*4)+(a*4)+19;

        printf("Case %d: %d\n",i,x);

        i++;
    }

    return 0;
}
