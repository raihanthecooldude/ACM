#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005

int main()
{
    int k, a, b, c, d, e;

    scanf("%d %d %d", &k, &a, &b);

    if(a>b)
    {
        c=a;
    }
    else
    {
        c=b;
    }

    if(k>a && k>b)
    {
        printf("-1\n");
    }
    else
    {
        if((a+b)%k==0)
        {
            d=(a+b)/k;
            printf("%d\n", d);
        }
        else
        {
            if(c%k==0)
            {
                d=c/k;
                printf("%d\n", d);
            }
            else
            {
                d=c/k;
                e=d+1;
                printf("%d\n", e);
            }
        }
    }


  return 0;
}
