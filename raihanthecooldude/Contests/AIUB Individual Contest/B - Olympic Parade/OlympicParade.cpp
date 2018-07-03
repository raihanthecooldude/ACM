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
    int n, k;

    while(scanf("%d %d", &n, &k)==2)
    {
        long long c[n], x, d=0, i, y, e;

        for(i=0;i<n;i++)
        {
            scanf("%lld", &c[i]);
        }

        for(i=0;i<n;i++)
        {
            x=count(c,c+n,c[i]);
            y=i;

            if(x>d)
            {
                d=x;
                e=i;
            }
        }

        printf("%lld\n", c[e]);
    }

    return 0;
}
