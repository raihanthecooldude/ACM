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
        double R, r;
        int n;

        cin>>R>>n;

        r=(R*sin(pi/n))/(1+sin(pi/n));

        printf("Case %d: %lf\n", caseno, r);

        caseno++;
    }

    return 0;
}
