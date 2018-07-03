#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, cl=0, dl=0, cr=0, dr=0, x;
    scanf("%d", &n);

    int l[n], r[n];
    for (i=0;i<n;i++)
    {
        scanf("%d %d", &l[i], &r[i]);

        if (l[i]==0)
        {
            cl++;
        }
        else if (l[i]==1)
        {
            dl++;
        }

        if (r[i]==0)
        {
            cr++;
        }
        else if (r[i]==1)
        {
            dr++;
        }
    }

    if (cl>dl && cr>dr)
    {
        x=dl+dr;
    }
    else if(cl<dl && cr>dr)
    {
        x=cl+dr;
    }
    else if(cl<dl && cr<dr)
    {
        x=cl+cr;
    }
    else
    {
        x=dl+cr;
    }

    printf("%d\n", x);

    return 0;
}
