#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int N, x=1, t;

    while(x==1)
    {
        scanf("%lld", &N);

        if(N>=0)
        {
            t=((N*N)+N+2)/2;

            printf("%lld\n", t);
        }
        else
        {
            return 0;
        }
    }


    return 0;
}
