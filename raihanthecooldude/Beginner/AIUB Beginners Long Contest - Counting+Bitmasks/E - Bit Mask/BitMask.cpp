#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005
#define UMAX 9223372036854775807
#define MAXARRAY 2000002
#define ll long long
#define nl '\n'
#define xx first
#define yy second
#define pb push_back
#define ss stringstream

int main()
{
    long long N, L, R, ans, l, r;

    while(cin>>N>>L>>R)
    {
        ans=0;
        long long i;
        for(i = 31; i>=0; i--)
        {
            if(N&(1LL<<i))
            {
                r=ans+(1LL<<i);
                if(r <= L)
                {
                    ans=ans+(1LL<<i);
                }
            }
            else
            {
                l = ans+(1LL<<i);
                if(l <= R)
                    {
                        ans=ans+(1LL<<i);
                    }
            }
        }
        printf("%lld\n", ans);
    }

    return 0;
}
