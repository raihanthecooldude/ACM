#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int N;

    scanf("%d", &N);

    while(N != -1)
    {
        int a[N], i, x=0, avg, c=0;

        for(i=0;i<N;i++)
        {
            scanf("%d", &a[i]);

            x=x+a[i];
        }

        if(x%N == 0)
        {
            avg=x/N;

            for(i=0;i<N;i++)
            {
                if(avg>a[i])
                {
                    c=c+avg-a[i];
                }
            }
            printf("%d\n", c);
        }
        else
        {
            printf("-1\n");
        }

        scanf("%d", &N);
    }

    return 0;
}
