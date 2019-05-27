#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int i, c=0, n;
    scanf("%d", &n);

    char s[n];
    scanf("%s", s);

    for (i=0;i<n;i++)
    {
        if (s[i]==s[i+1])
        {
            c++;
        }
    }

    printf("%d", c);

    return 0;
}
