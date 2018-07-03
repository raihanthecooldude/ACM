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
    ll i,j,k,n,m,z,c,x,t,sz,p1,p2,OR,AND, case1=1;
    cin>>t;

    while(case1<=t)
    {
        cin>>n>>m;

        x=1,z=0,c=0;

        for(i=63;i>=0;i--)
        {
            k=(x<<i);
            if((n & k) && z==0)
            {
                p1=i;
                z=1;
            }
            if((m & k) && c==0)
            {
                p2=i;
                c=1;
            }
            if(z==1 && c==1)
            {
                break;
            }

        }

        if(p2>p1)
        {
            OR= (x<<(p2+1))-1;
            AND=0;

        }
        else
        {
            z=m;
            p2=-1;
            for(i=(p1-1);i>=0;i--)
            {
                k=(x<<i);
                if((n & k)!=(m & k))
                {
                    p2=i;
                    break;
                }
            }
            for(i=p2;i>=0;i--)
            {
                k=x<<i;
                if((z & k)==0)
                    z=z^k;
                if((m & k))
                    m=m^k;
            }
            OR=n|z;
            AND=m;
        }
        cout<<"Case "<<case1<<": "<<OR<<" "<<AND<<endl;

        case1++;
    }

    return 0;
}
