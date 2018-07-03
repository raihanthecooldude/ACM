#include<stdio.h>
#include<math.h>

int main()
{
    int T, j=1;

    scanf("%d", &T);

    while(j<=T)
    {
        int N, K, i;
        scanf("%d %d", &N, &K);

        int a[N], sum =0, x;

        for (i=0;i<N;i++)
        {
            scanf("%d", &a[i]);

            sum=sum+a[i];
        }

        x=(K*(N+1))-sum;

        printf("Case %d: %d\n", j, x);
        j++;
    }

    return 0;
}
