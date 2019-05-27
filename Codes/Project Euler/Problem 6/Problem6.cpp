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
    ll n=100, r1, r2, res;

    r1=(n*(n+1)*((2*n)+1))/6;
    r2=(n*(n+1))/2;
    r2=r2*r2;

    res=r2-r1;

    cout<<res<<endl;

    return 0;
}
