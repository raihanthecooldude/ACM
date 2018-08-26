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


long long a[1<<22], sum[1<<22], b[1<<22], m=1<<22;


int main()
{
    long long i, j, k, count=0, n;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    b[a[0]]=1;
    sum[0]=a[0];

    for(i=1;i<n;i++)
    {
        sum[i]=sum[i-1]|a[i];
        b[sum[i]]=1;
        b[a[i]]=1;
    }

    a[n]=0;
    for(i=1;i<n;i++)
    {
        k=a[i];
        for(j=i;j<n;j++)
        {
            if(k==sum[j])
            {
                break;
            }

            sum[j]=k;
            b[k]=1;
            k=k|a[j+1];
        }
    }
    for(i=0;i<m;i++)
    {
        count=count+b[i];
    }
    cout<<count<<endl;

    return 0;
}
