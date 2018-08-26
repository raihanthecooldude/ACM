#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i,j;

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

   fun:
    {
        for (i=0;i<n;i++)
        {
            for (j=0;j<=i;j++)
            {
                if (a[j]==a[i])
                {

                }
            }
        }
    }

        return 0;
}
