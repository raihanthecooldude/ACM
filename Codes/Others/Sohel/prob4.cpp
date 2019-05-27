#include<stdio.h>
#include<math.h>

int a[100];
int k=0;

int arm(int x, int y);
int arm(int x, int y)
{
    int i;
    for(i=x;i<=y;i++)
    {
        int sum=0, r, temp=i, n=i;

        while(n>0)
        {
            r=n%10;
            sum=sum+(r*r*r);
            n=n/10;
        }

        if(temp==sum)
        {
            a[k]=temp;
            k++;
        }
    }
}

int main()
{
    int i=0, low, high, j=0;

    scanf("%d %d", &low, &high);
    arm(low, high);


    for(i=0;i<k;i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
