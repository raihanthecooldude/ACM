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
    long long t, i, x, sum=0;

    cin>>t;

    long long a[t], b[21];
    memset(b,0,sizeof(b));

    for(i=0;i<t;i++)
    {
        cin>>x;
        b[x+10]++;
    }

    for(i=0;i<10;i++)
    {
        sum=sum+(b[i]*b[20-i]);
    }

    sum=sum+((b[10]*(b[10]-1))/2);

    cout<<sum<<endl;

    return 0;
}
