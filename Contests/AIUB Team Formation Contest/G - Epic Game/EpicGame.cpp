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

int gcd(int u, int v)
{
    int p, q, r;

    if(u>=v)
    {
        p=u;
        q=v;
    }
    else
    {
        q=u;
        p=v;
    }

    while(q!=0)
    {
        r=p%q;
        p=q;
        q=r;
    }

    return p;
}

int main()
{
    int a, b, n, x=0, count=0, ret;

    cin>>a>>b>>n;

    while(n>=0)
    {
        if(count%2==0)
        {
            x=a;
        }
        else if(count%2==1)
        {
            x=b;
        }

        ret=gcd(x, n);

        n-=ret;

        count++;
    }

    if(count%2==0)
    {
        cout<<"0"<<endl;
    }
    else if(count%2==1)
    {
        cout<<"1"<<endl;
    }

    return 0;
}
