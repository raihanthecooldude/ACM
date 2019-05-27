#include<stdio.h>
#include<math.h>

int main()
{
    int n, a=0, b=1, c, i;

    scanf("%d", &n);

    printf("%d %d ", a, b);

    i=3;
    while(i<=n)
    {
        c=a+b;
        a=b;
        b=c;

        printf("%d ", c);
        i++;
    }

    return 0;
}
