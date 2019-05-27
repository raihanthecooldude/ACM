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
        int n, i, good=0, bad=0, neu=0, theri=0, count=0, diff;
        vector<int>v;

        cin>>n;

        int s[n];

        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }

        for(i=1;i<n;i++)
        {
            if(s[i]>=s[i-1])
            {
                good++;
            }

            if(s[i]<=s[i-1])
            {
                bad++;
            }

            if(s[i]==s[i-1])
            {
                neu++;
            }
        }

        for(i=1;i<n-1;i++)
        {
            if(s[i]>s[i-1] && s[i]>s[i+1])
            {
                v.push_back(i);
                theri++;
            }
        }

        if(good==n-1 && neu!=n-1)
        {
            cout<<"allGoodDays"<<endl;
        }
        else if(bad==n-1 && neu!=n-1)
        {
            cout<<"allBadDays"<<endl;
        }
        else if(neu==n-1)
        {
            cout<<"neutral"<<endl;
        }
        else if(theri>1)
        {
            for(i=1;i<v.size();i++)
            {
                diff=v[i]-v[i-1];

                if(diff>count)
                {
                    count=diff;
                }
            }

            cout<<count-1<<endl;
        }
        else
        {
            cout<<"none"<<endl;
        }
    }

    return 0;
}
