#include<stdio.h>
#include<string.h>

int main()
{
    char i, a[100],x=0,y=0;

    scanf("%s", a);

    for (i=0;a[i]!='\0';i++)
    {
        if (a[i]>=65 && a[i]<=90)
        {
            x++;
        }
        else
        {
            y++;
        }
    }

    if (x>y)
    {
        for (i=0;a[i]!='\0';i++)
        {
            if (a[i]>=65 && a[i]<=90)
            {
                a[i]=a[i];
            }
            else
            {
                a[i]=a[i]-32;
            }
        }
    }
    else
    {
        for (i=0;a[i]!='\0';i++)
        {
            if (a[i]>=65 && a[i]<=90)
            {
                a[i]=a[i]+32;
            }
            else
            {
                a[i]=a[i];
            }
        }
    }

    printf("%s", a);

    return 0;
}
