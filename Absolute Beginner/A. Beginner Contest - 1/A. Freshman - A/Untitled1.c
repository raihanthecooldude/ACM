#include<stdio.h>
#include<math.h>

int main()
{
    int T;
    scanf("%d", &T);

    int i, a, b, x;

    i=1;

    while (i<=T)
    {
        scanf("%d %d", &a, &b);

        x=a+b;

        printf("Case %d: %d\n", i, x);

        i++;
    }

    return 0;
}
