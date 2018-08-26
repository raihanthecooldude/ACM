#include<stdio.h>
#include<math.h>

int cycle (int n)
{
    int c=1;

    while (n!=1)
    {
        if (n%2==1)
        {
            n=(3*n)+1;
        }
        else
        {
            n=n/2;
        }
        c++;
        cycle(n);
    }
    return c;
}


int main()
{
    int i, x, j, maxcycle=0;

    scanf("%d %d", &i, &j);

    if (i<j)
    {
        for (int q=i;q<=j;q++)
        {
            x=cycle(q);

            if (x>maxcycle)
            {
                maxcycle=x;
            }
        }
    }
    else
    {
        for (int q=j;q<=i;q++)
        {
            x=cycle(q);

            if (x>maxcycle)
            {
                maxcycle=x;
            }
        }
    }


    printf("%d %d %d\n", i, j, maxcycle);

    return 0;
}
