#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

#define pi 2*acos(0.0)
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

    scanf("%d", &t);

    while(caseno<=t)
    {
        double r, circle, square, ans;

        scanf("%lf", &r);

        circle=pi*r*r;

        square=(r+r)*(r+r);

        ans=square-circle;
//        ans=ans+0.000000001;

        printf("Case %d: %.2lf\n", caseno, ans);

        caseno++;
    }

    return 0;
}
