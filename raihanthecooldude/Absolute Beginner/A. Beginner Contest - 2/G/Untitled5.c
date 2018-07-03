#include<stdio.h>
#include<math.h>

int main()
{
    int k,n,w,x,i,z;
    scanf("%d %d %d",&k,&n,&w);

    x=0;

    for(i=1;i<=w;i++)
    {
        x=x+(k*i);
    }
    if (n>x)
    {
        printf("0\n");
    }
    else
    {
        z=x-n;
        printf("%d\n",z);
    }


    return 0;
}
