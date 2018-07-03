#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005
#define UMAX 9223372036854775807
#define MAXARRAY 1000003

int mod(long long b, long long p, long long m)
{
    if(p==0)
    {
        return 1;
    }

    if(p%2==0)
    {
        long long x=mod(b,p/2,m);
        return (x*x)%m;
    }
    else
    {
        return (b%m * mod(b,p-1,m))%m;
    }
}

int main()
{
    long long B, P, M, x;

    while(cin>>B>>P>>M)
    {
        x=mod(B,P,M);

        printf("%lld\n", x);
    }

	return 0;
}
