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
    int n, l, r, x, i, j, count=0, sum=0, min, max, c, d;

    scanf("%d %d %d %d", &n, &l, &r, &x);

    int a[n];

    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    c=pow(2,n);
    for (i=0; i<c; i++)
    {
        sum = 0;
        min = MOD;
        max = -1;

        for (j=0; j<n; j++)
        {
            if (i&(1<<j))
            {
                sum=sum+a[j];
                if (a[j]<min)
                {
                    min=a[j];
                }
                if (a[j]>max)
                {
                    max=a[j];
                }
            }
        }

        d=abs(max-min);
        if (sum>=l && sum<=r && d>=x)
        {
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}
