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
double triangle(double a, double b, double c) {double s, area; s=(a+b+c)/2; area=sqrt(fabs(s*(s-a)*(s-b)*(s-c))); return area;}

int main()
{
    int t, caseno=1;
    cin>>t;
    while(caseno<=t)
    {
        double r1, r2, r3, a, b, c, tri, sector1, sector2, sector3, theta1, theta2, theta3, eps=1e-9;

        cin>>r1>>r2>>r3;

//        a=r1+r2;
//        b=r2+r3;
//        c=r1+r3;

//        tri=triangle(a, b, c);

        theta1=(acos((((r1+r2)*(r1+r2))+((r2+r3)*(r2+r3))-((r1+r3)*(r1+r3)))/(2*(r1+r2)*(r2+r3)))),//*(pi3/180);
        sector1=.5*theta1*r2*r2,//*(180/pi3);
//        tri=tri-sector;

        theta2=(acos((((r2+r3)*(r2+r3))+((r1+r3)*(r1+r3))-((r1+r2)*(r1+r2)))/(2*(r2+r3)*(r1+r3)))),//*(pi3/180);
        sector2=.5*theta2*r3*r3,//*(180/pi3);
//        tri=tri-sector;

        theta3=(acos((((r1+r2)*(r1+r2))+((r1+r3)*(r1+r3))-((r2+r3)*(r2+r3)))/(2*(r1+r2)*(r1+r3)))),//*(pi3/180);
        sector3=.5*theta3*r1*r1,//*(180/pi3);
//        tri=tri-sector;

        tri=triangle((r1+r2), (r2+r3), (r1+r3)) - (sector1+sector2+sector3);

        printf("Case %d: %lf\n", caseno, tri+eps);

        caseno++;
    }

    return 0;
}
