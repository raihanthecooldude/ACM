#include<stdio.h>
#include<math.h>
#include<string.h>

int prime(int x)
{
    for( i = 3; i <= n; i++ )
    {
        a[i]=0;
    }

    SquareRoot_n = sqrt((double) n );

    for( i=3, k=0; i <= SquareRoot_n; i=i+2, k++ )
    {
        if( a[i] == 0 )
        {
            for( j=i*i; j <= n; j=j+i+i )
            a[j] = 1;
        }
    }
}

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        int a, b;



    }

    return 0;
}
