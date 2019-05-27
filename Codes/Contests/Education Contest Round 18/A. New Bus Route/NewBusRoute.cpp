#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005
#define UMAX 9223372036854775807

int main()
{
    int n, i, count=0;
    long long diff=UMAX, x, y;

    scanf("%d", &n);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    sort(a,a+n);

    for(i=0;i<n-1;i++)
    {
        x=a[i+1]-a[i];
        y=abs(x);

        if(y<diff)
        {
            diff=y;
        }
    }

    for(i=0;i<n-1;i++)
    {
        x=a[i+1]-a[i];
        y=abs(x);

        if(y==diff)
        {
            count++;
        }
    }

    cout<<diff<<" "<<count<<endl;

  return 0;
}
