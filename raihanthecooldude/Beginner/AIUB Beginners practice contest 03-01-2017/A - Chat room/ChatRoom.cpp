#include<stdio.h>
#include<string.h>
#include<math.h>

int a[5];

int main ()
{
    int i, sum=0;
    char s[100];

    scanf("%s", s);

    for (i=0;i<100;i++)
    {
        if (s[i]==104 && a[0]==0)
        {
            a[0]=104;
            sum++;
        }

        else if (s[i]==101 && a[0]==104 && a[1]==0)
        {
            a[1]=101;
            sum++;
        }

        else if (s[i]==108 && a[1]==101 && a[2]==0)
        {
            a[2]=108;
            sum++;
        }

        else if (s[i]==108 && a[2]==108 && a[3]==0)
        {
            a[3]=108;
            sum++;
        }

        else if (s[i]==111 && a[3]==108 && a[4]==0)
        {
            a[4]=111;
            sum++;
        }
    }

    if (sum==5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
