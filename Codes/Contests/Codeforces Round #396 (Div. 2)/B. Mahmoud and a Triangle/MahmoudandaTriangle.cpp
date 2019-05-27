#include<iostream>
#include<cstdio>
#include<cmath>

int a[100000]={0};

using namespace std;

int main()
{
    int n, i, j, temp, c=0, flag=0;

    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

        if(flag==0)
        {
            break;
        }
    }

    for(i=0;i<n-2;j++)
    {
        if(a[i]+a[i+1]>a[i+2])
        {
            c=1;
        }
    }

    if(c==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
