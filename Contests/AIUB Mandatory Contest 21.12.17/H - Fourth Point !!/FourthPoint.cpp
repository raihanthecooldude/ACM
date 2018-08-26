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

int main()
{
    double x[4], y[4], ansx, ansy;

    while(scanf("%lf %lf", &x[0], &y[0])==2)
    {
        scanf("%lf %lf", &x[1], &y[1]);
        scanf("%lf %lf", &x[2], &y[2]);
        scanf("%lf %lf", &x[3], &y[3]);

        if(x[0]==x[2] && y[0]==y[2])
        {
            ansx=(x[1]+x[3])-x[0];
            ansy=(y[1]+y[3])-y[0];
        }
        else if(x[0]==x[3] && y[0]==y[3])
        {
            ansx=(x[1]+x[2])-x[0];
            ansy=(y[1]+y[2])-y[0];
        }
        else if(x[1]==x[2] && y[1]==y[2])
        {
            ansx=(x[0]+x[3])-x[1];
            ansy=(y[0]+y[3])-y[1];
        }
        else
        {
            ansx=(x[0]+x[2])-x[1];
            ansy=(y[0]+y[2])-y[1];
        }

        printf("%.3lf %.3lf\n", ansx, ansy);

    }

    return 0;
}
