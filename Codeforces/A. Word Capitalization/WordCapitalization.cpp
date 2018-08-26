#include<stdio.h>
#include<string.h>

int main()
{
    char i, a[1000];

    scanf("%s", a);

    if (a[0]>=65 && a[0]<=90)
    {
        printf("%s", a);
    }
    else
    {
        a[0]=a[0]-32;
        printf("%s", a);
    }

    return 0;
}
