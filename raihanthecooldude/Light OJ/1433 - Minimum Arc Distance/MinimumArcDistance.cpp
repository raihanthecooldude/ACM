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
ll maxarray(ll *arr, ll n) {ll x=*max_element(arr, arr+n); return x;} ///datatype of the array in the main function must be long long
ll minarray(ll *arr, ll n) {ll x=*min_element(arr, arr+n); return x;} ///datatype of the array in the main function must be long long

int main()
{
    int t, caseno=1;
    cin>>t;
    while(caseno<=t)
    {
        double ox, oy, ax, ay, bx, by, a, b, c, theta, ans;

        cin>>ox>>oy>>ax>>ay>>bx>>by;

        a=sqrt(pow(ox-ax, 2) + pow(oy-ay, 2));
//        cout<<a<<endl;
        b=sqrt(pow(ox-bx, 2) + pow(oy-by, 2));
//        cout<<b<<endl;
        c=sqrt(pow(ax-bx, 2) + pow(ay-by, 2));
//        cout<<c<<endl;

        theta=acos((pow(a,2) + pow(b, 2) - pow(c, 2))/(2*a*b));
        ans=a*theta;

        printf("Case %d: %lf\n", caseno, ans);

        caseno++;
    }

    return 0;
}
