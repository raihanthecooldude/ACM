#include<stdio.h>
#include<math.h>

int main()
{
    int i, a[10], j;

    for(i=0;i<10;i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d is matched\n", a[i]);
                break;
            }
        }
    }

    return 0;
}
