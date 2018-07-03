#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int i=1,T;
    double a,b,c,d,n,tri,h,s,area;

    scanf("%d", &T);

    while(i<=T)
    {
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

        n=fabs(c-a);
        s=(b+d+n)/2;
        tri=sqrt(s*(s-d)*(s-b)*(s-n));
        tri=fabs(tri);
        h=(2*tri)/n;
        area=(a+c)*h/2;

        printf("Case %d: %lf\n",i,area);

        i++;
    }

    return 0;
}
