#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, x;

    scanf("%d", &n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Main Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    x=a[0];
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=x;

    printf("Rotated Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
