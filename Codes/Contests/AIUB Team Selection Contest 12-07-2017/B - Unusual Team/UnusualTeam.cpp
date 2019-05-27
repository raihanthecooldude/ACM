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
    int t, a, b;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        if(a>=b)
        {
           cout<<"FunkyMonkeys"<<endl;
        }
        else
        {
            cout<<"WeWillEatYou"<<endl;
        }
    }

    return 0;
}
