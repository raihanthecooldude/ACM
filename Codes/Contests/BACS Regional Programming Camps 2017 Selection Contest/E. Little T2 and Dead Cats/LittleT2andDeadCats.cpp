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
    long long t, q=1, a[50], i, b[50];
    a[0]=1;
    a[1]=1;
    b[0]=1;
    b[1]=1;
    b[2]=1;
    b[3]=2;

    for(i=2;i<50;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=4;i<50;i++)
    {
        b[i]=b[i-1]+b[i-3];
    }

//    for(i=0;i<50;i++)
//    {
//        cout<<b[i]<<" ";
//    }

    cin>>t;

    while(q<=t)
    {
        long long k, n;

        cin>>k>>n;

        if(k==2)
        {
            cout<<"Case "<<q<<": "<<a[n]<<endl;
        }
        else if(k==3)
        {
            cout<<"Case "<<q<<": "<<b[n]<<endl;
        }

        q++;
    }

    return 0;
}
