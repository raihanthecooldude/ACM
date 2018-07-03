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
    int t, n, m, i, res;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        int u[m], v[m];

        for(i=0;i<m;i++)
        {
            cin>>u[i]>>v[i];
        }

        res=n-(2*m);

        if(res%2==0)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }

    return 0;
}
