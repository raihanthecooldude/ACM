#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005

int main()
{
    int n, c=0, i, d=0;

    scanf("%d", &n);
    int a[n], b[n];

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++)
    {
        scanf("%d", &b[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            c++;
        }
    }

    d=c/2;

    if(c==0)
    {
        printf("0\n");
    }
    else
    {
        if(d!=0)
        {
            printf("%d\n", d);
        }
        else if(d==0)
        {
            printf("-1\n");
        }
    }

  return 0;
}
