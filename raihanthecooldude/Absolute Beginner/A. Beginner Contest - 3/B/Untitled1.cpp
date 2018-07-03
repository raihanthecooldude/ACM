#include<stdio.h>

int main()
{
    int i, a[100];

    for (i=0;i<99;i++)
    {
        scanf("%d", &a[i]);
    }

    for (i=0;i<99;i++)
    {
        if (a[i]==42)
        {
            break;
        }
        else
        {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}
