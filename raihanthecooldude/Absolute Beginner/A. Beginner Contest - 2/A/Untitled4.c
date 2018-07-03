#include<stdio.h>
#include<math.h>

int main()
{
    long long a, b, x;
    while( scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a>b)
        {
            x=a-b;
        }
        else
        {
            x=b-a;
        }
        printf("%lld\n", x);
    }

    return 0;
}

