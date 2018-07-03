#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, x, max=0, y, a[100000]={0}, b[100000]={0};

    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        x=a[i]-1;
        b[x]++;
    }

    for(i=0;i<n;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
            y=i+1;
        }
    }

    printf("%d\n", y);

    return 0;
}
