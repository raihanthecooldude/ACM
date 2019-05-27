#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter your numbers");
    scanf("%d %d", &a, &b);
    if (a>b)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", a);
    }
    return 0;
}
