#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    int s,c,n;
    scanf("%d", &n);
    s=0;
    c=2;
    while (c<=n)
    {
        s=s+ pow(c,2);
        c=c+2;
    }
    printf ("%d", s);
    return 0;
}
