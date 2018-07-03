/*b-ismi-llāhi r-raḥmāni r-raḥīmi*/

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
    int values[5], dp[10000], i, j;

    values[0]=1;
    values[1]=5;
    values[2]=10;
    values[3]=25;
    values[4]=50;

    memset(dp, 0, sizeof(dp));
    dp[0]=1;

    for(i=0;i<5;i++)
    {
        for(j=values[i];j<10000;j++)
        {
            dp[j]=dp[j]+dp[j-values[i]];
        }
    }

    int n;

    while(cin>>n)
    {
        cout<<dp[n]<<endl;
    }


    return 0;
}
