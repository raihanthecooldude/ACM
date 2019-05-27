#include<stdio.h>
#include<math.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int N, i, j=0;
        float c;

        scanf("%d %d", &N, &i);

        c=(float)N;

        if(i%2 != 0)
        {
            j=i;
            printf("%d\n", j);
        }
        else
        {
            while(i%2 == 0)
            {
                c=c/2;
                c=ceil(c);
                j=j+c;
                i=i/2;
            }

            j++;

            printf("%d\n", j);
        }
    }

    return 0;
}
