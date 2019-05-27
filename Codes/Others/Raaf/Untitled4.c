#include<stdio.h>
#include<conio.h>
int main()
{
    int r,s;
    scanf("%d", &s);
    r=0;
    while(s!=0)
    {
        r=r*10;
        r=r+(s%10);
        s=s/10;
    }
    printf ("%d",r);
    return 0;
}
