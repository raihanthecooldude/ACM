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
    string s;
    int i, len, count=0;

    cin>>s;

    len=s.size();

    for(i=1;i<len;i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            count++;
            break;
        }
    }

    if(count>0)
    {
        cout<<s<<endl;
    }
    else if(count==0)
    {
        for(i=1;i<len;i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]+=32;
            }
        }

        if(s[0]>=97 && s[0]<=122)
        {
            s[0]-=32;
        }
        else
        {
            s[0]+=32;
        }

        cout<<s<<endl;
    }

    return 0;
}
