#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005

int main()
{
    int T;

    scanf("%d",&T);

    while(T--)
    {
        int N, M, K, x, y, z;

        scanf("%d %d %d", &N, &M, &K);

        if(N>M)
        {
            x=N;
            y=M;
        }
        else
        {
            x=M;
            y=N;
        }

        z=x-y-K;

        if(z<0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", z);
        }
    }


  return 0;
}
