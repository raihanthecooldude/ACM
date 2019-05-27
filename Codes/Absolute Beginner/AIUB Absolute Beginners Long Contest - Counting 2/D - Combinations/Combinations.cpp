#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005
#define UMAX 9223372036854775807
#define MAXARRAY 2000002
typedef long long ll;

int main()
{
    double N, M, x, p, q, res, i, yolo=1;

    while(yolo==1)
    {
        scanf("%lf %lf", &N, &M);

        if(N==0 && M==0)
        {
            return 0;
        }
        else
        {
            x=1;
            p=N;
            q=N-M;

            if(q>M)
            {
                q=M;
            }

            while(q)
            {
                x = x*(p/q);
                p--;
                q--;
            }

            res=x;
        }

        printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n", N, M, res);
    }


    return 0;
}
