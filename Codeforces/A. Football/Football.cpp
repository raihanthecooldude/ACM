#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
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
    int i, l, count=1;
    string s;

    cin>>s;

    l=s.size();

    for(i=1;i<l;i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
        else
        {
            count=1;
        }

        if(count==7)
        {
            break;
        }
    }

    if(count==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}
