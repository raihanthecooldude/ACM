#include<stdio.h>
#include<math.h>

int main()
{
    int x, i=0, j=0, a[1000], b[1000], y=0, n;

    scanf("%d", &x);

    printf("Given Number: %d\n", x);

    while(x>0)
    {
        a[i]=x%10;
        x=x/10;
        i++;
    }
    n=a[0];
    a[0]=a[i-1];
    a[i-1]=n;

    for(j=0;j<i;j++)
    {
        b[j]=a[i-j-1];
    }

    for(j=0;j<i;j++)
    {
        y=(y*10)+b[j];
    }

    printf("Swapped Number: %d\n", y);

    return 0;
}
