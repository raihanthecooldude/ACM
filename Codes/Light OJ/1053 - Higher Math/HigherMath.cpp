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
        int a, b, c;

        cin>>a>>b>>c;

        if(((a*a)+(b*b)==(c*c)) || ((a*a)+(c*c)==(b*b)) || ((c*c)+(b*b)==(a*a)))
        {
            cout<<"Case "<<caseno<<": yes"<<endl;
        }
        else
        {
            cout<<"Case "<<caseno<<": no"<<endl;
        }

        caseno++;
    }

    return 0;
}
