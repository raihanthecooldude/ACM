#include<stdio.h>
#include<math.h>

int main()
{
    int i=1,T,x1,x2,y1,y2,M,x,y,j=0,a[10000],b[10000];

    scanf("%d",&T);

    while(i<=T)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&M);

        printf("Case %d:\n", i);

        for(j=0;j<M;j++)
        {
            scanf("%d %d", &x, &y);

            if((x>x1 && x<x2) && (y>y1 && y<y2))
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }

//        printf("Case %d:\n", i);
//
//        for(j=0;j<M;j++)
//        {
//            if((a[j]>x1 && a[j]<x2) && (b[j]>y1 && b[j]<y2))
//            {
//                printf("Yes\n");
//            }
//            else
//            {
//                printf("No\n");
//            }
//        }


        i++;
    }

    return 0;
}
