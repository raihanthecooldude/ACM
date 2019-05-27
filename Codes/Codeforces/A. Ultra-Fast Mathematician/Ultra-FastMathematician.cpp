#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int i,n=0,c[100];

    scanf("%s %s", a, b);

    for (i=0;i<100;i++)
    {
        if ((a[i]=='0' && b[i]=='0') || (a[i]=='1' && b[i]=='1'))
        {
            c[i]=0;
            n++;
        }
        else if ((a[i]=='1' && b[i]=='0') || (a[i]=='0' && b[i]=='1'))
        {
            c[i]=1;
            n++;
        }
        else
        {
            break;
        }
    }

    for (i=0;i<n;i++)
    {
        printf("%d", c[i]);
    }

    return 0;
}
