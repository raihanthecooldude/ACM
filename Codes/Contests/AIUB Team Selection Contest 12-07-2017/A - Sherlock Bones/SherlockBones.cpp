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
    int t;

    cin>>t;

    while(t--)
    {
        int n, i, j, count=0, p, q, x;

        cin>>n;

        string s;

        cin>>s;

        x=s.size();

        for(i=0;i<x;i++)
        {
            //cin>>s[i];

            if(s[i]=='1')
            {
                if(count==0)
                {
                    p=i;
                    count++;
                }

                q=i;
            }
        }

        cout<<q-p<<endl;
    }

    return 0;
}
