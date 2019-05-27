#include <cstdio>
#include<cmath>

using namespace std;

int main()
{
    int i, a, b, c, deg, p, q, r;
    while (scanf("%d %d %d %d",&i,&a,&b,&c)!= 0)
    {
        if (i==0 && a==0 && b==0 && c==0)
        {
            break;
        }
        if (a>i)
        {
            p=(40-a)+i;
        }
        else
        {
            p=i-a;
        }

        if (b<a)
        {
            q=(40-a)+b;
        }
        else
        {
            q=b-a;
        }

        if (c>b)
        {
            r=(40-c)+b;
        }
        else
        {
            r=b-c;
        }

        deg=(120+p+q+r) * 9;

        printf("%d\n",deg);
    }
    return 0;
}
