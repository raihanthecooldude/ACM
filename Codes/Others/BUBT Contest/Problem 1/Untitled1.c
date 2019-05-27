#include<stdio.h>
#include<math.h>

int main()
{
    int T, K, N, x1,y,p1,n1,r1,o1;

    printf("Enter your case no");
    scanf("%d", &T);

    int a[T];

    printf("Press 0 if you want to input total amount of meat or  press 1 if you want to input owner's amount");

    for (K=0;K<T;K++)
    {

        scanf("%d", &a[K]);
    }

    for (K=0;K<T;K++)
    {
        if (k==0)
        {
          yo:
            {

                printf("Enter total amount of meat and it must be multiple of 9");
                scanf("%d", &N);

                if (N%9==0)
                {
                    p1=N/3;
                    x1=(p1*2)/3;
                    o1=x1/2;
                }
                else
                {
                    printf("Please kindly enter multiple of 9\nPress 1 to go to give the total amount of meat again");
                    scanf("%d", &n1);
                    if(n1==1)
                    {
                        goto yo;
                    }
                }
            }
        }
    }

    return 0;
}
