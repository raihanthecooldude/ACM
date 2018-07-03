#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005
#define UMAX 9223372036854775807
#define MAXARRAY 2000002
typedef long long ll;

int main()
{
    int x=1, a[100], i;

    a[0]=1;
    a[1]=1;
    for(i=2;i<100;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }

    while(x>0)
    {
        scanf("%d", &x);

        if(x<=50 && x>0)
        {
            printf("%d\n", a[x]);
        }
        else
        {
            return 0;
        }
    }

    return 0;
}
