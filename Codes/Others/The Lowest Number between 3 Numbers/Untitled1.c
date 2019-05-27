#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,x;
    printf("Enter your numbers:");
    scanf("%d%d%d",&a,&b,&c),
    x=a;
    if(x>b)
    {
        x=b;
    }
    if(x>c)
    {
        x=c;
    }
    printf("%d",x);
    return 0;
}
