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
    int S;

    scanf("%d", &S);

    while(S--)
    {
        int N, x, count=0, i, a;;

        cin>>N;

        int k[N], H[N];

        if(N%2==0)
        {
            for(i=0;i<N;i++)
            {
                cin>>H[i];
            }

            printf("no\n");
        }
        else
        {
            x=N/2;

            for(i=0;i<=x;i++)
            {
                k[i]=i+1;
                //cout<<k[i]<<" ";
            }

            for(i=x+1;i<N;i++)
            {
                k[i]=N-i;
                //cout<<k[i]<<" ";
            }
            cout<<endl;

            for(i=0;i<N;i++)
            {
                cin>>H[i];
            }

            for(i=0;i<N;i++)
            {
                if(H[i]!=k[i])
                {
                    count=1;
                    break;
                }
            }

            if(count==0)
            {
                printf("yes\n");
            }
            else if(count==1)
            {
                printf("no\n");
            }
        }
    }


    return 0;
}
