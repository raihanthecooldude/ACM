#include<stdio.h>

int main()
{
    int i, x;

    x=0;

    for (i=1;i<=100;i=i+2)
    {
        printf("%d\t", i);
        x=x+i;
    }
    printf("\n\nSum = %d\n", x);

    return 0;
}
