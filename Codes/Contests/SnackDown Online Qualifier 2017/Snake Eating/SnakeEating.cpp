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
    int T;

    cin>>T;

    while(T--)
    {
        int N, Q, count=0, i, j;

        cin>>N>>Q;

        int L[N], K[Q];

        for(i=0;i<N;i++)
        {
            cin>>L[i];
        }

        sort(L,L+N);

        for(i=0;i<Q;i++)
        {
            cin>>K[i];

            for(j=0;j<N;j++)
            {
                if(L[j]+j>=K[i])
                {
                    break;
                }
            }
            cout<<N-j<<endl;
        }
    }

    return 0;
}
