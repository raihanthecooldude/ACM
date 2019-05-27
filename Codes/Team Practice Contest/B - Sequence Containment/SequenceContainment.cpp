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

ll lcs[1001][1001];

int main()
{
    memset(lcs,0,sizeof(lcs));
    int test, caseno=1;

    cin>>test;

    while(caseno<=test)
    {
        int a, b, i, j, sum, ans;
        cin>>a>>b;
        string s1, s2;
        cin>>s1>>s2;

        for(i=0;i<=a;i++)
        {
            lcs[i][0]=i;
        }

        for(j=0;j<=b;j++)
        {
            lcs[0][j]=j;
        }

        for(i=1;i<=a;i++)
        {
            for(j=1;j<=b;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    lcs[i][j]=lcs[i-1][j-1];
                }
                else
                {
                    lcs[i][j]=min(lcs[i-1][j],lcs[i][j-1]);
                }
                lcs[i][j]++;
            }
        }

        printf("Case %d: %lld\n", caseno, lcs[a][b]);

        caseno++;
    }

    return 0;
}
