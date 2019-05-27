#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    int x;
    printf("Enter your number");
    scanf("%d",&x);
    if(x>0)
    {
        printf("Positive");
    }
    else if (x<0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
    return 0;
}
