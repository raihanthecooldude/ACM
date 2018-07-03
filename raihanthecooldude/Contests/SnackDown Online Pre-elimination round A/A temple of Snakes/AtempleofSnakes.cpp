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
    int t, n, i;

    cin>>t;

    while(t--)
    {
        cin>>n;

        int h[n], count=0, x;

        for(i=0;i<n;i++)
        {
            cin>>h[i];
        }

        for(i=1;i<n;i++)
        {
            if(h[i]==h[i-1])
            {
                count++;

                if(i<(n/2))
                {
                    h[i-1]--;
                }
                else
                {
                    h[i]--;
                }
            }

            if(abs(h[i]-h[i-1])>1)
            {
                x=h[i];

                if(i<(n/2))
                {
                    h[i]=h[i]-abs(h[i]-h[i-1])+1;
                    count+=x-h[i];
                }
                else
                {
                    h[i]=h[i-1]-1;
                    count+=x-h[i];
                }
            }
        }

        cout<<count<<endl;
    }

    return 0;
}
