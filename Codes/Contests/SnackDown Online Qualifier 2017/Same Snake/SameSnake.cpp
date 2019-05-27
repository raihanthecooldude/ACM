#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005
#define UMAX 9223372036854775807
#define MAXARRAY 2000002
#define ll long long
#define nl '\n'
#define xx first
#define yy second
#define pb push_back
#define ss stringstream

int main()
{
    int T;

    cin>>T;

    while(T--)
    {
        int x1, x2, x3, x4, y1, y2, y3, y4, m, n, count=0;

        cin>>x1>>y1>>x2>>y2;
        cin>>x3>>y3>>x4>>y4;

        if(y1==y3 && y2==y4)
        {
            if(x1>x2)
            {
                m=x1;
            }
            else
            {
                m=x2;
            }

            if(x3<x4)
            {
                n=x3;
            }
            else
            {
                n=x4;
            }

            if(m-n>=0)
            {
                count=0;
            }
            else
            {
                count=1;
            }
        }
        else if((x1==x3 && y1==y3) || (x2==x4 && y2==y4))
        {
            count=0;
        }
        else if(x1==x3 && x2==x4)
        {
            if(y1>y2)
            {
                m=y1;
            }
            else
            {
                m=y2;
            }

            if(y3<y4)
            {
                n=y3;
            }
            else
            {
                n=y4;
            }

            if(m-n>=0)
            {
                count=0;
            }
            else
            {
                count=1;
            }
        }
        else
        {
            count=1;
        }

        if(count==0)
        {
            cout<<"yes"<<endl;
        }
        else if(count==1)
        {
            cout<<"no"<<endl;
        }
    }

    return 0;
}
