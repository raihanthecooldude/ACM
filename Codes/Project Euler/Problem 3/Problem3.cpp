#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005
#define UMAX 9223372036854775807
#define MAXARRAY 2000002
typedef long long ll;

int main()
{
    ll n, i, res=1;

    scanf("%lld", &n);

    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            n=n/i;

            if(i>res)
            {
                res=i;
            }
        }
    }

    printf("%lld\n", res);

    return 0;
}
