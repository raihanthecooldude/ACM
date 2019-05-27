#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, x=1, t;

    while(x==1)
    {
        scanf("%lld", &n);

        if(n>=3)
        {
            if(n%2==0)
            {
                t=(n*(n-2)*((2*n)-5))/24;
            }
            else
            {
                t=((n-1)*(n-3)*((2*n)-1))/24;
            }

            printf("%lld\n", t);
        }
        else
        {
            return 0;
        }
    }


    return 0;
}
