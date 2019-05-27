#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    int n, i, j, flag, temp, c=0, m=0;

    scanf("%d", &n);

    int s[n];

    for(i=0;i<n;i++)
    {
        scanf("%d", &s[i]);
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

                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }

    for(i=n-1;i>=m;i--)
    {
        if(s[i]==4)
        {
            c++;
        }
        else if(s[i]+1==4)
        {
            c++;

        }
        else if()
    }
}
