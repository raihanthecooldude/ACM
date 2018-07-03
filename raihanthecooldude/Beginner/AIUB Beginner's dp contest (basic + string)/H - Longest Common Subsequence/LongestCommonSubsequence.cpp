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

int lcs[1001][1001];
int main()
{
    string s1, s2;

    while(getline(cin,s1))//(cin>s1)
    {
//        cin>>s2;
        getline(cin,s2);
        int a, b, i, j;

        a=s1.size();
        b=s2.size();

//        int lcs[a][b];
//        int lcs[1001][1001];
//        memset(lcs, 0, sizeof(lcs));

        for(i=a;i>=0;i--)
        {
            for(j=b;j>=0;j--)
            {
                if(i==a || j==b)
                {
                    lcs[i][j]=0;
                }
                else if(s1[i]==s2[j])
                {
                    lcs[i][j]=1+lcs[i+1][j+1];
                }
                else
                {
                    lcs[i][j]=max(lcs[i+1][j],lcs[i][j+1]);
                }
            }
        }

        cout<<lcs[0][0]<<endl;

    }

    return 0;
}
