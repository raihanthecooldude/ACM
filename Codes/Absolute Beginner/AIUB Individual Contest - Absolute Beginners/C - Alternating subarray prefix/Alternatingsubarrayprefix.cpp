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
        int N, i;

        scanf("%d", &N);

        int A[N];

        for(i=0;i<N;i++)
        {
            scanf("%d", &A[i]);
        }

        for(i=0;i<N;i++)
        {
            if(A[i]>0)
            {
                for(j=i;A[j]>0;j++)
                {
                    c++;
                }
            }
            else
            {
                for(j=i;A[j]<0;j++)
                {
                    c++;
                }
            }
        }
    }


  return 0;
}
