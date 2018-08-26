#include<stdio.h>
#include<math.h>

int main()
{
    int y,a[4],i,j=1,year,x,x1,x2,x3,x4;

    scanf("%d", &y);

    y=y+1;

    for (i=3;i>=0;i--)
    {
        a[i]=y%10;
        y=y/10;
    }

    x1=a[0];
    x2=a[1];
    x3=a[2];
    x4=a[3];

    while (j<10000)
    {
        if ((x1==x2) || (x1==x3) || (x1==x4) || (x2==x3) || (x2==x4) || (x3==x4))
        {
            if (x4==9 && x3==9 && x2==9 && x1!=9)
            {
                x1=x1+1;
                x2=0;
                x3=0;
                x4=0;
            }

            else if (x4==9 && x3==9 && x2!=9)
            {
                x2=x2+1;
                x3=0;
                x4=0;
            }

            else if (x4==9 && x3!=9)
            {
                x3=x3+1;
                x4=0;
            }

            else if (x4!=9)
            {
                x4=x4+1;
            }
        }
        else
        {
            break;
        }
        j++;
}

    x=(x1*1000)+(x2*100)+(x3*10)+x4;

    printf("%d\n", x);

    return 0;
}

