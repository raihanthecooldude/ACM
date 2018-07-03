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
    int N, L, i, j;

    scanf("%d", &N);

    while(N--)
    {
        scanf("%d", &L);

        int a[L];

        for(i=0;i<L;i++)
        {
            scanf("%d", &a[i]);
        }

        ll count=0, S;

        for(i=1;i<L;i++)
        {
            for(j=0;j<L-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    count++;
                }
            }
        }

        S=count;
        printf("Optimal train swapping takes %d swaps.\n", S);

    }


    return 0;
}
