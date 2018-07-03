#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main ()
{
    int a,b,x;
    scanf("d% d%",&a, &b);

    if (a>b)
    {
        x=a-b;
    }
    else
    {
        x=b-a;
    }

    printf("%d",x);

    return 0;
}
