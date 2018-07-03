#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, c=0, d=0, max, min;

    scanf("%d", &n);

    int s[n];

    for(i=0;i<n;i++)
    {
        scanf("%d", &s[i]);

        if(i==0)
        {
            max=s[i];
            min=s[i];
        }

        if(i>0)
        {
            if(s[i]>max)
            {
                max=s[i];
                c++;
            }
            else if(s[i]<min)
            {
                min=s[i];
                d++;
            }
        }
    }

    printf("%d %d\n", c, d);

    return 0;
}
