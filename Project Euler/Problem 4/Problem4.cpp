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
    int x=999, y=999, m=1, n=2, left, rev, r, res=1;

    while(x!=1)
    {
        y=x;
        while(y!=1)
        {
            m=x*y;

            left=m;
            rev=0;

            while(left>0)
            {
                r=left%10;
                rev=(rev*10)+r;
                left=left/10;
            }

            n=rev;

            if(m==n)
            {
                //cout<<"YOLO "<<m<<" "<<n<<endl;
                if(m>res)
                {
                    res=m;
                }
                y--;
            }
            else
            {
                y--;
            }
        }

        x--;
    }

    cout<<res<<endl;

    return 0;
}
