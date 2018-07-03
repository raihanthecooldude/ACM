#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int n, i=1, j, k, c=0, x=0, y=0;

    scanf("%d", &n);

    while(i<=n)
    {
        for(j=1;j<i;j++)
        {
            for(k=1;k<i;k++)
            {
                if((i*i) == (j*j)+(k*k))
                {
                    if(k>j)
                    {
                        c++;
                    }
                }
            }
        }

        i++;
    }

    printf("%d\n", c);

    return 0;
}
