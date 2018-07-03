#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005
#define UMAX 9223372036854775807
#define MAXARRAY 2000002
typedef long long ll;

ll a[MAXARRAY];

int bigmod(ll x,ll y,ll z)
{
    ll n;

    if(y==0)
    {
        return 1;
    }

    n=bigmod(x,y/2,z);
    n=(n*n)%z;

    if(y%2==1)
    {
        n=(n*x)%z;
    }

    return n;
}

int main()
{
    ll T, n, k, i, c, modulo=1000003, res;

    a[0]=1;
    for(i=1;i<=1000000;i++)
    {
        a[i]=((a[i-1]%modulo)*(i%modulo))%modulo;
    }
    scanf("%lld", &T);

    i=1;
    while(i<=T)
    {
        scanf("%lld %lld", &n, &k);

        c=(a[k]*a[n-k])%modulo;
        res=bigmod(c,modulo-2,modulo);
        res=(a[n]*res)%modulo;

        printf("Case %lld: %lld\n", i, res);

        i++;
    }
}
