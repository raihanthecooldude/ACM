#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000], i, c=0, x;

    gets(s);

    x=strlen(s);

    for(i=0;i!='\n';i++)
    {
        if(s[i]==' ')
        {
            c++;
        }
    }

    c++;
    printf("%d %d", x, c);

    return 0;
}
