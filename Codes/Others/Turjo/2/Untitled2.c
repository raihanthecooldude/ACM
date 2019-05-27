#include<stdio.h>

int main()
{
    int i;
    char a[5],x;

    for (i=0;i<=4;i++)
    {
        scanf("%c", &a[i]);
    }

    x=a[0];

    for (i=0;i<=4;i++)
    {
        if (a[i]<x)
        {
            x=a[i];
        }
    }

    printf("%c", x);

    return 0;

}
