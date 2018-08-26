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
    long long n, m, occur=0, po=0, no=0;
    int i, ans, l, r, xoxo;
    scanf("%lld %lld", &n, &m);
    int ar[n], sum[n];
    for(i=0;i<n;i++)
    {
//        cin>>ar[i];
        scanf("%d", &ar[i]);
        occur=occur+ar[i];
        sum[i]=occur;

        if(ar[i]==1)
        {
            po++;
        }
        else
        {
            no++;
        }
    }

    if(po<no)
    {
        xoxo=po*2;
    }
    else
    {
        xoxo=no*2;
    }

    for(i=0;i<m;i++)
    {
//        cin>>l>>r;
        scanf("%d %d", &l, &r);
        if((r-l)%2==1 && (r-l)<xoxo)
        {
//            cout<<"1"<<endl;
            printf("1\n");
        }
        else
        {
//            cout<<"0"<<endl;
            printf("0\n");
        }

//        if(l>1)
//        {
//            ans=sum[r-1]-sum[l-2];
//        }
//        else
//        {
//            ans=sum[r-1];
//        }

//        if(l==r)
//        {
//            cout<<"0"<<endl;
//        }
//        else if(ans==0)
//        {
//            cout<<"1"<<endl;
//        }
//        else
//        {
//            cout<<"0"<<endl;
//        }

    }

    return 0;
}
