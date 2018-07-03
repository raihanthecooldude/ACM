#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

#define pi 3.1415927
#define pi2 2*acos(0.0)
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

ll GCD(ll a, ll b) {while(b){b^=a^=b^=a%=b;} return a;}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, i, j, ans=0, dp[32];
        memset(dp,0,sizeof(dp));
        cin>>n;
        int price[n], weight[n];

        for(i=0;i<n;i++)
        {
            cin>>price[i]>>weight[i];
        }

        int g, value;
        cin>>g;
//        int mw[g];
//
//        for(i=0;i<g;i++)
//        {
//            cin>>mw[i];
//        }

        for(i=0;i<n;i++)
        {
            for(j=32;j>=0;j--)
            {
                if(weight[i]<=j && dp[j]<dp[j-weight[i]]+price[i])
                {
//                    cout<<"before dp "<<i<<" "<<j<<" "<<dp[j]<<endl;
                    dp[j] = dp[j-weight[i]] + price[i];
//                    cout<<"after dp "<<i<<" "<<j<<" "<<dp[j]<<endl;
                }
            }
        }

        while(g--)
        {
            cin>>value;
            ans=ans+dp[value];
        }

//        for(i=0;i<g;i++)
//        {
//            ans=ans+dp[mw[i]];
//        }

        cout<<ans<<endl;
    }

    return 0;
}
