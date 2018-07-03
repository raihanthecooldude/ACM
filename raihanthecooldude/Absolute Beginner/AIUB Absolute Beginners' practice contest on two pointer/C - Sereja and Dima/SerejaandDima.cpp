#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005

int main()
{
    int n, i, j, k, sereja=0, dima=0, count=0;

    scanf("%d", &n);

    int a[n];

    for(k=0;k<n;k++)
    {
        scanf("%d", &a[k]);
    }

    for(i=0,j=n-1;i<j;)
    {
        count++;

        if(a[i]>a[j])
        {
            if(count%2==1)
            {
                sereja=sereja+a[i];
            }
            else if(count%2==0)
            {
                dima=dima+a[i];
            }

            i++;
        }
        else if(a[i]<a[j])
        {

            if(count%2==1)
            {
                sereja=sereja+a[j];
            }
            else if(count%2==0)
            {
                dima=dima+a[j];
            }

            j--;
        }
    }

    if(i==j)
    {
        if(count%2==1)
        {
            dima=dima+a[j];
        }
        else if(count%2==0)
        {
            sereja=sereja+a[i];
        }
    }

    cout<<sereja<<" "<<dima<<endl;

  return 0;
}
