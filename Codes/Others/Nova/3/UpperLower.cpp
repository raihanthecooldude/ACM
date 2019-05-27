#include<stdio.h>

int main()
{
    char c=0;

    while(c!='\n')
    {
        scanf("%c", &c);
        if(c!='\n')
        {
            printf("%c", c-32);
        }
    }

    return 0;
}
