#include<stdio.h>
#include<math.h>

int main()
{
    int t, a, b, c, d;

    scanf("%d", &t);

    while (t>0)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if (a==b && b==c && c==d && d==a)
        {
            printf("square\n");
        }
        else if ((a==c && b==d) || (a==b && c==d) || (a==d && b==c))
        {
            printf("rectangle\n");
        }
        else  if ((a+b+c)<=d || (a+c+d)<=b || (a+b+d)<=c || (b+c+d)<=a)
        {
            printf("banana\n");
        }
        else
        {
            printf("quadrangle\n");
        }

        t--;
    }

    return 0;
}
