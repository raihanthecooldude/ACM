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

int main()
{
    int test, caseno=1;
    cin>>test;
    while(caseno<=test)
    {
        int k, i;
        cin>>k;
        ll a[k], b[k], x, sum=0;
        for(i=0;i<k;i++)
        {
            cin>>a[i];
            //cout<<"a "<<a[i]<<endl;
        }
        for(i=0;i<k;i++)
        {
            cin>>b[i];
            //cout<<"b "<<b[i]<<endl;
        }

        sort(a, a+k);
        sort(b, b+k);
        for(i=0;i<k;i++)
        {
            x=abs(a[i]-b[i]);
//            cout<<"X "<<x<<endl;
//            if(a[i]>b[i])
//            {
//                x=a[i]-b[i];
//            }
//            else
//            {
//                x=b[i]-a[i];
//            }
            sum=sum+x;
//            cout<<"sum "<<sum<<endl;
        }

        printf("Case %d: %lld\n", caseno, sum);
        caseno++;
    }

    return 0;
}
