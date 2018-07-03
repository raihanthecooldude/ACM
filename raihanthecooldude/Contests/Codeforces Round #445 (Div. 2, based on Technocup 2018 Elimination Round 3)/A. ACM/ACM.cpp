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
    int a[20], i, n1, n2, n3, n4, n5, n6;

    cin>>n1>>n2>>n3>>n4>>n5>>n6;

    a[0]=n1+n2+n3;
    a[1]=n1+n2+n4;
    a[2]=n1+n2+n5;
    a[3]=n1+n2+n6;
    a[4]=n1+n3+n4;
    a[5]=n1+n3+n5;
    a[6]=n1+n3+n6;
    a[7]=n1+n4+n5;
    a[8]=n1+n4+n6;
    a[9]=n1+n5+n6;
    a[10]=n2+n3+n4;
    a[11]=n2+n3+n5;
    a[12]=n2+n3+n6;
    a[13]=n2+n4+n5;
    a[14]=n2+n4+n6;
    a[15]=n2+n5+n6;
    a[16]=n3+n4+n5;
    a[17]=n3+n4+n6;
    a[18]=n3+n5+n6;
    a[19]=n4+n5+n6;

    if(a[0]==a[19])
    {
        cout<<"YES"<<endl;
        return 0;
    }

    if(a[1]==a[18])
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(a[2]==a[17])
    {
        cout<<"YES"<<endl;
        return 0;
    }

    if(a[3]==a[16])
    {
        cout<<"YES"<<endl;
        return 0;
    }

    if(a[4]==a[15])
    {
        cout<<"YES"<<endl;
        return 0;
    }

    if(a[5]==a[14])
    {
        cout<<"YES"<<endl;
        return 0;
    }

    if(a[6]==a[13])
    {
        cout<<"YES"<<endl;
        return 0;
    }

    if(a[7]==a[12])
    {
        cout<<"YES"<<endl;
        return 0;
    }

    if(a[8]==a[11])
    {
        cout<<"YES"<<endl;
        return 0;
    }

    if(a[9]==a[10])
    {
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;


    return 0;
}
