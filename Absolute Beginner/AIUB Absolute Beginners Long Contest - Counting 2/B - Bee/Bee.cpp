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
    unsigned int i, N, a[MAX], b[MAX], c[MAX];

    a[0]=0;
    b[0]=1;
    c[0]=1;
    a[1]=1;
    b[1]=1;

    for(i=2;i<MAX;i++)
    {
        b[i]=b[i-1]+b[i-2];
        c[i-1]=b[i]+b[i-1]-1;
        a[i]=c[i-1];
    }

    scanf("%u", &N);

    while(N!=-1)
    {
        printf("%u %u\n", a[N], c[N]);

        scanf("%u", &N);
    }

    return 0;
}
