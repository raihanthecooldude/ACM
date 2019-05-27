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

int a[105][105],desti, dp[105][105][105];
int solve(int temple, int go, int come)
{

	if(temple==desti)
	{
		return a[go][temple] +  a[come][temple] ;
	}
	if(dp[temple][go][come]!=-1)
	{
		return dp[temple][go][come];
	}

	int sum1=solve(temple+1, temple , come ) + a[go][temple] ;
	int sum2=solve(temple+1, go , temple) + a[come][temple] ;
	return dp[temple][go][come]=min(sum1,sum2);

}
int main()
{
	int test, caseno=1;
	cin>>test;
	while(caseno<=test)
	{
	    int r, i, j, k, u, id, w, ans;
		cin>>k>>r;
		desti = k+1 ;
		for(i=0; i<=desti; i++)
		{
			a[i][i]=0;
		}
		memset(dp,-1,sizeof(dp));
		for(i=0;i<=desti; i++)
		{
			cin>>id;
			for(j=0; j<desti; j++)
			{
				cin>>u>>w;
				a[id][u]=w;

			}
		}

        ans=(k+1)*r+solve(1,0,0);
		printf("Case %d: %d\n",caseno, ans);

		caseno++;
	}

	return 0;

}
