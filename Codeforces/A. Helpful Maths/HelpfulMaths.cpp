#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int n, i, j, x;
    char s[100];

    scanf("%s", s);

    n=strlen(s);

    for (j=0;j<n;j++)
    {
        for (i=2;i<n;i=i+2)
        {
            if (s[i] < s[i-2])
            {
                x=s[i];
                s[i]=s[i-2];
                s[i-2]=x;
            }
        }
    }

    printf("%s\n", s);

    return 0;
}
