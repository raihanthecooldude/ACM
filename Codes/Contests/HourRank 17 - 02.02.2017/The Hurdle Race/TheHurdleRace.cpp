#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    int n,k,i,c,d;

    scanf("%d %d", &n, &k);
    c=k;
    d=k;
    int h[n];

    for(i=0;i<n;i++)
    {
        scanf("%d", &h[i]);

        if(h[i]>c)
        {
            c=h[i];
        }
    }

    if(c>d)
    {
        printf("%d\n", c-d);
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
