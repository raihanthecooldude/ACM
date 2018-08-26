#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005

int main()
{
    int a, b, c=0;

    scanf("%d %d", &a, &b);

    while(a<=b)
    {
        a=a*3;
        b=b*2;

        c++;
    }

    printf("%d\n", c);


  return 0;
}
