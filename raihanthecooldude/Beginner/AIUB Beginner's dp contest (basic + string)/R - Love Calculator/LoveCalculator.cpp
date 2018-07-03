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

ll lcs[31][31];
ll ran[31][31];
ll num[31][31];

int main()
{
    memset(lcs,0,sizeof(lcs));
    memset(ran,0,sizeof(ran));
    memset(num,0,sizeof(num));
    int test, caseno=1;

    cin>>test;

    while(caseno<=test)
    {
        string s1, s2;
        cin>>s1>>s2;

        int a, b, i, j, sum, ans;

        a=s1.size();
        b=s2.size();
//        sum=a+b;

        for(i=0;i<=a;i++)
        {
            lcs[i][0]=i;
            num[i][0]=1;
        }

        for(j=0;j<=b;j++)
        {
            lcs[0][j]=j;
            num[0][j]=1;
        }

        for(i=1;i<=a;i++)
        {
            for(j=1;j<=b;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    lcs[i][j]=lcs[i-1][j-1];
                }
                else
                {
                    lcs[i][j]=min(lcs[i-1][j],lcs[i][j-1]);
                }
                lcs[i][j]++;
            }
        }

//        for(i=0;i<a;i++)
//        {
//            for(j=0;j<b;j++)
//            {
//                ran[i][j]=lcs[j][i];
//            }
//        }



        for(i=1; i<=a;i++)
        {
            for(j=1;j<=b;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    num[i][j]=num[i-1][j-1];
                }
                else if(lcs[i][j-1]<lcs[i-1][j])
                {
                    num[i][j]=num[i][j-1];
                }
                else if(lcs[i][j-1]>lcs[i-1][j])
                {
                    num[i][j]=num[i-1][j];
                }
                else
                {
                    num[i][j]=num[i][j-1]+num[i-1][j];
                }
            }
        }

//        ans=sum-lcs[0][0];
//        cout<<lcs[a][b]<<" "<<num[a][b]<<endl;
        printf("Case %d: %lld %lld\n", caseno, lcs[a][b], num[a][b]);

        caseno++;
    }

    return 0;
}
