#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include <sstream>
#include <bitset>
#include <utility>
using namespace std;

#define pi 3.1415927
#define pi2 2.0*acos(0.0)
#define pi3 acos(-1.0)
#define MOD 1000000007
#define MAX 100005
#define UMAX 9223372036854775807
#define MAXARRAY 2000002
#define imax 2147483647
#define imin -2147483648
#define ll long long
#define nl '\n'
#define xx first
#define yy second
#define pb push_back
#define ss stringstream

ll GCD(ll a, ll b) {while(b){b^=a^=b^=a%=b;} return a;}
ll LCM(ll a, ll b) {int x=(a*b)/GCD(a, b); return x;}

int main()
{
    int t, caseno=1;
    cin>>t;
    while(caseno<=t)
    {
        int n, i, j, mx, ans=0, q, maxvalue, prein, postin;
        cin>>n;

        q=(2*n)-1;
        int a[q][q], dp[q][q];
        memset(a,-1,sizeof(a));
        memset(dp,0,sizeof(dp));

        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                cin>>a[i][j];
//                cout<<"a "<<i<<" "<<j<<" "<<a[i][j]<<endl;
            }
        }

        for(i=n;i<q;i++)
        {
            for(j=0;j<q-i;j++)
            {
                cin>>a[i][j];
//                cout<<"a "<<i<<" "<<j<<" "<<a[i][j]<<endl;
            }
        }

        dp[0][0]=a[0][0];

        for(i=0;i<n-1;i++)
        {
            for(j=0;j<=i;j++)
            {
//                dp[i+1][j]=dp[i+1][j]+a[i+1][j];
                dp[i+1][j]=max(dp[i+1][j], a[i+1][j]+dp[i][j]);
//                dp[i+1][j]=dp[i+1][j+1]+a[i+1][j+1];
                dp[i+1][j+1]=max(dp[i+1][j+1], a[i+1][j+1]+dp[i][j]);

//                cout<<"dp "<<i<<" "<<j<<" "<<dp[i][j]<<endl;
            }
        }

        for(i=n;i<q;i++)
        {
            for(j=0;j<q-i;j++)
            {
                maxvalue=max(dp[i-1][j], dp[i-1][j+1]);
                dp[i][j]=a[i][j]+maxvalue;

//                cout<<"dp "<<i<<" "<<j<<" "<<dp[i][j]<<endl;
            }
        }

        ans=dp[q-1][0];

        cout<<"Case "<<caseno<<": "<<ans<<endl;

        caseno++;
    }

    return 0;
}
