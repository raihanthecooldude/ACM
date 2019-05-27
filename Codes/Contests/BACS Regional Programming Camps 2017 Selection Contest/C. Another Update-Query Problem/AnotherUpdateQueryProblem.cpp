#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

#define pi 3.1415927
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
    long long t, h=1;

    scanf("%lld", &t);

    while(h<=t)
    {
        long long n, q, i, j, count=0, k=0;


        scanf("%lld %lld", &n, &q);

        long long a[n], sum[q], c[q], l[q], r[q], d[q];
        memset(sum,0,sizeof(sum));

        for(i=0;i<n;i++)
        {
            scanf("%lld", &a[i]);
        }

        for(i=0;i<q;i++)
        {
            scanf("%lld %lld %lld %lld", &c[i], &l[i], &r[i], &d[i]);
        }
        for(i=0;i<q;i++)
        {
            if(count==0)
            {
                printf("Case %lld:\n", h);
                count++;
            }

            if(c[i]==2)
            {
                for(j=l[i]-1;j<r[i];j++)
                {
                    sum[i]=sum[i]+(a[j]*((d[i]*k)+1));
                    //cout<<sum<<endl;
                    k++;
                }
            }
        }

        for(i=0;i<q;i++)
        {
            printf("%lld\n", sum[i]);
        }

        h++;
    }

    return 0;
}
