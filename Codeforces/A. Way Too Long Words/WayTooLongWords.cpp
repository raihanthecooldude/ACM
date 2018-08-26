#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;

int main()
{
    int n, i, x;
    char a[100];

    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%s", a);

        x=strlen(a);

        if(x<11)
        {
            printf("%s\n", a);
        }
        else
        {
            printf("%c%d%c\n", a[0], x-2, a[x-1]);
        }
    }

    return 0;
}
