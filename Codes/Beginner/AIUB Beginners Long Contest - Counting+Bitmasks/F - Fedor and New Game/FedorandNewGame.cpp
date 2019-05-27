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
    int n, m, k, count=0, i, x, y, j;

    cin>>n>>m>>k;

    int a[m+1];

    for(i=0;i<m+1;i++)
    {
        cin>>a[i];
    }

    for (i=0;i<m;i++)
    {
        x=0;

        for (j=0;j<n;j++)
        {
            if (((a[i] >> j) & 1) != ((a[m] >> j) & 1))
            {
                x++;
            }
        }

        if(x<=k)
        {
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}
