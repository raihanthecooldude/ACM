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
#define MMOD 100000007
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

int main()
{
    int test, caseno=1;

    cin>>test;

    while(caseno<=test)
    {
        int n, k, i, j;
        scanf("%d %d", &n, &k);
//        cin>>n>>k;

//        int p=n+10;
//        int q=k+10;
        ll value[n+1], coin[k+1];
        memset(value,0,sizeof(value));
        memset(coin,0,sizeof(coin));

        for(i=1;i<=n;i++)
        {
            scanf("%lld", &value[i]);
//            cin>>value[i];
        }

        coin[0]=1;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=k;j++)
            {
                if(value[i]<=j)
                {
                    coin[j]=coin[j]+coin[j-value[i]];
                }

                coin[j]=coin[j]%MMOD;
            }
        }

        printf("Case %d: %lld\n", caseno, coin[k]);
//        cout<<coin[j]<<endl;

        caseno++;
    }

    return 0;
}
