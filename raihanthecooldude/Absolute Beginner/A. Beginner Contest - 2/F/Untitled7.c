#include<stdio.h>
#include<math.h>

int main()
{
    int n,x=0,i;
    char a[50];

    scanf("%d\n",&n);

    scanf("%c",&a[0]);

    for(i=1;i<n;i++)
    {
        scanf("%c",&a[i]);
        if(a[i]==a[i-1])
        x=x+1;
    }
    printf("%d",x);

    return 0;
}

