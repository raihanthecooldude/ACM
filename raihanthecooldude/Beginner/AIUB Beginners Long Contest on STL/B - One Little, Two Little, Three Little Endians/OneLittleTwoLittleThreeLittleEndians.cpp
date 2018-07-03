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
	long x, y, j;
	while(scanf("%ld", &x)==1)
    {
        bitset<32>b(x);

        //cout<<b<<endl;

        long con=0;

        for (j=0;j<32;j++)
        {
            if(b[j]>0)
            {   y=(3-(j/8))*8+(j%8);
                con|=1<<y;
            }
        }

        printf("%ld converts to %ld\n", x, con);
    }

	return 0;
}
