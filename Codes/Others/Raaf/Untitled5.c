#include<stdio.h>
#include<conio.h>
int main()
{
    int l,i,j;
    scanf("%d", &l);
    for (i=0;i<l;i++)
    {
        for (j=1;j<l-i-1;j++)
        {
            printf("%d\n",j);
        }
        printf("%d\n",i);
    }
    return 0;
}
