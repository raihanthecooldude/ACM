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

long long a, b, c, d, e, f;

int main()
{
    long long q[10000], i;
    int n, caseno=1, t;
    scanf("%d", &t);

    while(caseno<=t)
    {
        cin>>q[0]>>q[1]>>q[2]>>q[3]>>q[4]>>q[5]>>n;
        for(i=6;i<=n;i++)
        {
            q[i]=(q[i-1]+q[i-2]+q[i-3]+q[i-4]+q[i-5]+q[i-6])%10000007;
        }

        printf("Case %d: %lld\n", caseno, q[n]  % 10000007);
        caseno++;
    }
    return 0;
}

///ricursive

/*

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

long long a[10000];

int fn(int n)
{
    if( n == 0 ) return a[0];
    if( n == 1 ) return a[1];
    if( n == 2 ) return a[2];
    if( n == 3 ) return a[3];
    if( n == 4 ) return a[4];
    if( n == 5 ) return a[5];

    if(a[n]!=-1)
    {
        return a[n];
    }
    else
    {
        a[n]=fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6);
        return a[n];
    }
}

int main()
{
    memset(a,-1,sizeof(a));
    int n, caseno=1, t, i;
    scanf("%d", &t);

    while(caseno<=t)
    {
        cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>n;
        for(i=6;i<=n;i++)
        {
            a[i]=(a[i-1]+a[i-2]+a[i-3]+a[i-4]+a[i-5]+a[i-6])%10000007;
        }

        printf("Case %d: %lld\n", caseno, a[n]  % 10000007);
        caseno++;
    }
    return 0;
}


*/
