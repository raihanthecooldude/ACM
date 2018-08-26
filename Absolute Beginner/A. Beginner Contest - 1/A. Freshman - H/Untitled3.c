#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, x;
    while( scanf("%lf %lf",&a,&b)==2.0)
    {
        x=a+b;
        printf("%.4lf\n", x);
    }

    return 0;
}
