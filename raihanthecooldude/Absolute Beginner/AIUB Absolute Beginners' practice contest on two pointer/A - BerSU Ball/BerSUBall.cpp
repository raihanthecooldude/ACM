#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005

int main()
{
    int n, m, i, j, x, y=0, count=0;

    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a,a+n);

    scanf("%d", &m);
    int b[m];
    for(j=0;j<m;j++)
    {
        scanf("%d", &b[j]);
    }
    sort(b,b+m);

    if(n<m)
    {
        x=n;
    }
    else
    {
        x=m;
    }

    for( i=0,j=0 ;i<n || j<m ; )
    {
        if((a[i]==b[j]) || (a[i]==(b[j]+1)) || (a[i]==(b[j]-1)))
        {
            count++;
            i++;
            j++;
        }
        else
        {
            if(a[i]<b[j])
            {
                i++;
            }
            else if(b[j]<a[i])
            {
                j++;
            }
        }
    }

    printf("%d\n", count);

  return 0;
}
