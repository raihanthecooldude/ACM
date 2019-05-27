#include<stdio.h>
#include<string.h>

int main()
{
    char c[80];
    int i;
    gets(c);

    for(i=0;i!='\n';i++)
    {
        if(c[i]==' ')
        {
            c[i]='a';
        }
    }

    puts(c);

    return 0;
}
