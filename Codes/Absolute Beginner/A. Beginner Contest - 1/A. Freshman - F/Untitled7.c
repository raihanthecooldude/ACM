#include<stdio.h>
#include<string.h>

int main()
{
    int i=1;
    char a[50];

    while (scanf("%c", &a[0])==1)
    {
        if (a[0]=='H')
        {
            printf("Case %d: Hajj-E-Akbar\n", i);
        }
        else if (a[0]=='U')
        {
            printf("Case %d: Hajj-E-Asghar\n", i);
        }
        else if (a[0]=='*')
        {
            break;
        }
        i++;

    }

    return 0;
}
