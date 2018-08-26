#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int i=0, c;
    char a[200];
    scanf("%s", a);

    while(a[i]!='\0')
    {
        if (a[i]=='.')
        {
            c=0;
            i++;
        }
        else if (a[i]=='-' && a[i+1]=='.')
        {
            c=1;
            i=i+2;
        }
        else if (a[i]=='-' && a[i+1]=='-')
        {
            c=2;
            i=i+2;
        }

        printf("%d", c);

    }

    return 0;
}
