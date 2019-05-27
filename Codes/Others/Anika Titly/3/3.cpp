#include<stdio.h>
#include<string.h>

int main()
{
    char p[1000], q[1000], i=0, j=0;

    gets(p);
    gets(q);

    while(p[i]!='\0')
    {
        i++;
    }

    while(q[j]!='\0')
    {
        p[i]=q[j];
        j++;
        i++;
    }

    p[i]='\0';

    printf("%s", p);
    return 0;
}
