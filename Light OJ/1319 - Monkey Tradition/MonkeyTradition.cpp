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


void extendedeuclid(ll a, ll b, ll &x, ll &y, ll &g)
{
    x=0;
    y=1;
    g=b;

    ll m, n, q, r, u, v;

    for(u=1, v=0;a!=0;g=a, a=r)
    {
        q=g/a;
        r=g%a;
        m=x-(u*q);
        n=y-(v*q);
        x=u;
        y=v;
        u=m;
        v=n;
    }
}

ll chineseremaindertheorem(vector<ll>ns, vector<ll>as)
{
    int k=ns.size(), i;

    ll N=1, x=0, r, s, g;

    for(i=0;i<k;i++)
    {
        N=N*ns[i];
    }
    for(i=0;i<k;i++)
    {
        extendedeuclid(ns[i], N/ns[i], r, s, g);
        x=x+(as[i]*s*(N/ns[i]));
        x=x%N;
    }

    if(x<0)
    {
        x=x+N;
    }

    return x;
}


int main()
{
    int t, caseno=1;
    cin>>t;
    while(caseno<=t)
    {
        ll n, i, ans;
        cin>>n;
        vector<ll>x(n), a(n);

        for(i=0;i<n;i++)
        {
            cin>>x[i]>>a[i];
        }

        ans=chineseremaindertheorem(x, a);

        printf("Case %d: %lld\n", caseno, ans);

        caseno++;
    }

    return 0;
}
