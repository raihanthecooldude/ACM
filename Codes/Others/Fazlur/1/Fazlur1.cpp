#include<stdio.h>
#include<math.h>

int main()
{
    int k = 0, temp, i, j;

    int a[2][10]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    int Arr[10]={0,0,0,0,0,0,0,0,0,0};

    for(i=0; i<1; i++)
    {
        for(j=0; j<10; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<1; i++)
    {
        for(j=0; j<10; j++)
        {
            Arr[k] = a[i][j];
            k++;
        }
    }

    for(i=1;i<10;i++)
    {
        for(j=0; j<10; j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                temp=Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1]=temp;
            }
        }
    }

    k = 0;
    for(i=1; i<2; i++)
    {
        for(int j=0; j<10; j++)
        {
            a[i][j] = Arr[k];
            k++;
        }
    }

    for(i=1; i<2; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
    return 0;
}
