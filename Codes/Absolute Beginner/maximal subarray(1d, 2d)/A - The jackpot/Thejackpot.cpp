#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N=1, i;


    while(N!=0)
    {
        scanf("%d", &N);

        int a[N], sum=0, max=0;
        for(i=0;i<N;i++)
        {
                scanf("%d", &a[i]);

                sum=sum+a[i];

                if(sum<0)
                {
                   sum=0;
                }
                else if(sum>max)
                {
                    max=sum;
                }
        }

       if(max>0 && N!=0)
        {
           printf("The maximum winning streak is %d.\n", max);
        }
        else if(max<=0 && N!=0)
        {
            printf("Losing streak.\n");
        }
    }

    return 0;
}
