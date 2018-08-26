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
    ll t;
    cin>>t;
    while(t--)
    {
        ll l, r, count=1, i, k;
        cin>>l>>r;

        for(i=0;i<64;i++)
        {
            k=count<<i;

            if((l|k)>r)
            {
                break;
            }

            l=l|k;
        }
        cout<<l<<endl;
    }

    return 0;
}
