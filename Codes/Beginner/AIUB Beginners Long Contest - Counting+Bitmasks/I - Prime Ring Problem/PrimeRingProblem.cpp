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


int T = 0, n;
int circle[20];
bool used[20];

bool is_prime(int p)
{
    for(int i = 2; i <= sqrt(p); i++)
    {
        if(p % i == 0)
        {
            return false;
        }
    }
    return true;
}

void ring(int m)
{
    if(m == n - 1 && is_prime(circle[n - 1] + circle[n]))
    {
        for(int i = 0; i < n; i++)
        {
            printf(i == n - 1? "%d" : "%d ", circle[i]);
        }

        printf("\n");
        return;
    }
    for(int i = 2; i <= n; i++)
    {
        if(!used[i] && is_prime(circle[m] + i))
        {
            used[i] = true;
            circle[m + 1] = i;
            ring(m + 1);
            used[i] = false;
        }
    }
}

int main()
{
    while(scanf("%d", &n) == 1)
    {
        T++;

        if(T > 1) printf("\n");

        circle[0] = circle[n] = 1;

        printf("Case %d:\n", T);
        ring(0);
    }

    return 0;
}
