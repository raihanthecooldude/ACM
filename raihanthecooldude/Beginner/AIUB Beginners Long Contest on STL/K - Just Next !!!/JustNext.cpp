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
    int i,j,k,n,m,z,t,c;
    cin>>t;
    while(t--)
    {
        z=-1;
        cin>>n;
        int s[n];
        cin>>s[0];
        for(i=1;i<n;i++)
        {
            cin>>s[i];
            if(s[i-1]<s[i])
            {
                z=i-1;
            }
        }
        if(z==-1)
        {
            cout<<-1<<endl;
        }
        else
        {
            int d=s[z];
            j=z+1;

            for(i=j+1;i<n;i++)
            {
                if(s[i]>d && s[i]<s[j])
                {
                    j=i;
                }
            }
            swap(s[z],s[j]);

            sort(s+z+1,s+n);
            for(i=0;i<n;i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
