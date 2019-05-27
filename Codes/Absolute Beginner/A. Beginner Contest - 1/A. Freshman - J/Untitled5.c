#include<stdio.h>
#include<math.h>

int main()
{
    int T;
    scanf("%d", &T);

    int i, x1, x2, x3, x;

    i=1;

    while (i<=T)
    {
        scanf("%d %d %d", &x1, &x2, &x3);

        if ((x1>x2 && x1<x3) || (x1<x2 && x1>x3))
        {
            x=x1;
        }
        else if ((x2>x1 && x2<x3) || (x2<x1 && x2>x3))
        {
            x=x2;
        }
        else if ((x3>x2 && x3<x1) || (x3<x2 && x3>x1))
        {
            x=x3;
        }


        printf("Case %d: %d\n", i, x);

        i++;
    }

    return 0;
}
