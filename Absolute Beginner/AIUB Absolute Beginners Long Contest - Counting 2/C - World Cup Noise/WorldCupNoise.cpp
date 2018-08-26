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
    ll a[100], i, m, n;

    a[0]=1;
    a[1]=1;

    for(i=2;i<100;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }

    scanf("%lld", &m);

    i=1;
    while(i<=m)
    {
        scanf("%lld", &n);

        printf("Scenario #%lld:\n%lld\n\n", i, a[n+1]);
        i++;
    }
    return 0;
}
