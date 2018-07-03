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
#define INT_MAX 2147483647
//#define INT_MIN -2147483648
#define ll long long
#define nl '\n'
#define xx first
#define yy second
#define pb push_back
#define ss stringstream
#define mem(a,b) memset(a,b,sizeof(a))
#define FOR(i,j,k) for(i=j;i<=k;i++)
#define REV(i,j,k) for(i=j;i>=k;i--)

//ll GCD(ll a, ll b) {while(b){b^=a^=b^=a%=b;} return a;}
//ll LCM(ll a, ll b) {int x=(a*b)/GCD(a, b); return x;}

int dp[101][101][11][11];
int a, b, c, d;

long long func(int n1, int n2, int k1, int k2)
{
    if (n1 < 0 || n2 < 0 || k1 < 0 || k2 < 0)
    {
        return 0;
    }
    else if(n1 == 0 && n2 == 0)
    {
        return 1;
    }
    else if (dp[n1][n2][k1][k2] != -1)
    {
        return dp[n1][n2][k1][k2];
    }

    return dp[n1][n2][k1][k2] = (func(n1-1, n2, k1-1, d) + func(n1, n2-1, c, k2-1)) % 100000000;
//    return a[n1][n2][k1][k2];
}

int main()
{
    memset(dp, -1, sizeof(dp));

    cin>>a>>b>>c>>d;
    cout << func(a, b, c, d) << endl;


    return 0;
}
