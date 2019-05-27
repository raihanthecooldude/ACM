#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,sum,product;
    printf("Enter your number\n");
    scanf("%d", &n);

    sum=0;
    product=1;

    while(n!=0)
    {
        i=n%10;
        sum=sum+i;
        product=product*i;

        n=n/10;
    }

    printf("\nSum= %d and Product= %d\n", sum, product);

    return 0;
}
