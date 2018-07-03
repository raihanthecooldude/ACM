#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int a, b, x;
    while (scanf("%d %d",&a,&b)==2 && (a!= -1 && b!= -1))
    {
        x=abs(a-b);

        if (x>50)
        {
            x=100-x;
        }

        printf("%d\n", x);
    }

    return 0;
}
