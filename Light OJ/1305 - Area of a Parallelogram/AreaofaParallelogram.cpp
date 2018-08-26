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
        int x[4], y[4], i;
        long long area1, area2, area;

        for(i=0;i<3;i++)
        {
            cin>>x[i]>>y[i];
        }

        x[3]=x[2]+x[0]-x[1];
        y[3]=y[2]+y[0]-y[1];

        area1=(x[0]*y[1])+(x[1]*y[2])+(x[2]*y[3])+(x[3]*y[0]);
        area2=(y[0]*x[1])+(y[1]*x[2])+(y[2]*x[3])+(y[3]*x[0]);
        area=abs(area1-area2);
        area=area/2;

//        printf("Case %d: %d %d %lf\n", caseno, x[3], y[3], area);
        cout<<"Case "<<caseno<<": "<<x[3]<<" "<<y[3]<<" "<<area<<endl;

        caseno++;
    }

    return 0;
}
