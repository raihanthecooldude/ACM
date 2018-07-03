#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int N, i, z=0,x;

        scanf("%d", &N);

        int A[N];

        for(i=0;i<N;i++)
        {
            scanf("%d", &A[i]);

            if(A[i]==1)
            {
                z++;
            }
        }

        if(z%2==1)
        {
            x=z;
        }
        else
        {
            x=N-z;
        }

        printf("%d\n", x);
    }


  return 0;
}
