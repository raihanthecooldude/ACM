#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--)
    {
        int m, n, i, j, k, a[100000], b[100000];
        double SquareRoot_n;

        scanf("%d %d", &m, &n);

        for( i = 3; i <= n; i++ )
        {
            a[i]=0;
            b[i]=0;
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

        if (m<3)
        {
            printf("2 ");
        }
        for( i=3; i<=n; i=i+2 )
        {
            if (i>m && i<n)
            {
                if( a[i] == 0 )
                {
                    printf("%d ", i);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
