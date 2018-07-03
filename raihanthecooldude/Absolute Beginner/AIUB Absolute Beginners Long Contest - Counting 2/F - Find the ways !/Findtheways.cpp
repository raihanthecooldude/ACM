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
    double n, k, x, p, q, res, i, yolo=1, count;


        while(cin>>n>>k)
        {

        if(n==0 && k==0)
        {
            return 0;
        }
        else
        {
            x=1;
            p=n;
            q=n-k;

            if(q>k)
            {
                q=k;
            }

            while(q)
            {
                x = x*(p/q);
                p--;
                q--;
            }

            res=x;

            count=0;

            while(res>=1)
            {
                res=res/10;
                count++;
            }

            printf("%.0lf\n", count);
        }
    }


    return 0;
}
