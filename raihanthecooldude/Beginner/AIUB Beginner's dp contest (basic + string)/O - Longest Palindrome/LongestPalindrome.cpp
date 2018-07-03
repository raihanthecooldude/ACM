/*b-ismi-llāhi r-raḥmāni r-raḥīmi*/

#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<sstream>
#include<bitset>
#include<utility>
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
ll maxarray(ll *arr, ll n) {ll x=*max_element(arr, arr+n); return x;} ///datatype of the array in the main function must be long long
ll minarray(ll *arr, ll n) {ll x=*min_element(arr, arr+n); return x;} ///datatype of the array in the main function must be long long
double triangle(double a, double b, double c) {double s, area; s=(a+b+c)/2; area=sqrt(fabs(s*(s-a)*(s-b)*(s-c))); return area;}

int dp[1005][1005];
string s;

int lp(int l, int r)
{
	if (l == r)
    {
        return 1;
    }

    if (l + 1 == r)
    {
		if (s[l] == s[r])
		{
			return 2;
		}
		else
		{
		    return 1;
		}
	}

	if (dp[l][r] != -1)
    {
		return dp[l][r];
    }
    else if (s[l] == s[r])
    {
        return dp[l][r] = 2 + lp(l + 1, r - 1);
    }
	else
    {
        return dp[l][r] = max(lp(l, r - 1), lp(l + 1, r));
    }
}

int main()
{
	int test, caseno=1, ans, q;
	cin>>test;
    getchar();
	while(test--)
    {
		cin>>s;

        q=s.size();
		if (q == 0)
        {
			printf("0\n");
			continue;
		}

		memset(dp, -1, sizeof(dp));
		ans=lp(0, q-1);

		printf("%d\n", ans);
	}

	return 0;
}
