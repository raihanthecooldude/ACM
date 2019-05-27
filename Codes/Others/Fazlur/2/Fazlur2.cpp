#include<stdio.h>
#include<math.h>

int max(int num1, int num2);
int min(int num1, int num2);

int max(int num1, int num2)
{
    if(num1>num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int min(int num1, int num2)
{
    if(num1<num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{

    int i, x, y, n;

    printf("Enter size of the array: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    x = a[0];
    y = a[0];

    for(i=1; i<n; i++)
    {
        x=max(a[i],x);
        y=min(a[i],y);
    }

    printf("Maximum element = %d\n", x);
    printf("Minimum element = %d", y);

    return 0;
}
