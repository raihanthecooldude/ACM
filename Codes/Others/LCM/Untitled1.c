#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,x,G,L,T;
    scanf("%d", T);

    while (T>0)
    {
        scanf("%d %d", &a, &b);
        x=a;
        while (b%x!=0)
        {
            G=x;
            x--;
        }
        G=x+1;

        L=(a*b)/G;

        printf("%d %d", G, L);

        T--;
    }


    return 0;
}
