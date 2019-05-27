#include<stdio.h>
#include<math.h>

int main()
{
    long long a, b, x;
    while( scanf("%lld %lld",&a,&b)==2)
    {
        if (a==0 && b==0)
        {
            break;
        }
        x=a+b;
        printf("%lld\n", x);
    }

    return 0;
}
