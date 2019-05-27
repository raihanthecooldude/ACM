#include<stdio.h>
#include<math.h>

int main()
{
    int n, max1=0, max2=0, i;

    scanf("%d", &n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>max1)
        {
            max1=a[i];
        }
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>max2 && a[i]<max1)
        {
            max2=a[i];
        }
    }

    printf("2nd max element: %d", max2);

    return 0;
}
