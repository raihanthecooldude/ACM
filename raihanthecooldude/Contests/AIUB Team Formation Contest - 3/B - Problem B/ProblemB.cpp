#include<stdio.h>
#include<math.h>

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        float avg, x, y;
        int z, x1, y1, z1;

        scanf("%f", &avg);

        x=avg;
        x=ceil(x);
        x1=x;

        y1=avg;

        if(x1-y1 == 0)
        {
            printf("1\n");
        }
        else
        {
            y=avg-y1;
            y=y*10000;
            z=10000/(int)y;

            printf("%d\n", z);
        }
    }

    return 0;
}
