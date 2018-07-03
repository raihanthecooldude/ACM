#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

#define pi 3.1415927
#define MOD 1000000007
#define MAX 100005
#define UMAX 9223372036854775807
#define MAXARRAY 2000002
#define ll long long
#define nl '\n'
#define xx first
#define yy second
#define pb push_back
#define ss stringstream

int main()
{
    int t, caseno=1;

    cin>>t;

    while(caseno<=t)
    {
        long long n, a1, a2, i, j, area=0, tree;
        double ans, hi;

        cin>>n;

        long long x[n], y[n];

        for(i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }

        for(i=0,j=1;j<n;i++,j++)
        {
            a1=x[i]*y[j];
            a2=x[j]*y[i];
            area=area+(a1-a2);

            //cout<<"a1 "<<a1<<"a2 "<<a2<<"Area "<<area<<endl;
        }

        a1=x[n-1]*y[0];
        a2=x[0]*y[n-1];
        area=area+(a1-a2);

//        cout<<"a1 "<<a1<<"a2 "<<a2<<"Area "<<area<<endl;

        area=abs(area);
        ans=area/2;
//        cout<<"area "<<area<<" ans "<<ans<<" "<<n<<endl;

        hi=(double)n/2;
        tree=ans+1-hi;

        printf("Case %d: %lld\n", caseno, tree);

//        cout<<area<<endl;

        caseno++;
    }

    return 0;
}
