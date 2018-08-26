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
    int n, i, x, res;

    while(cin>>n)
    {
        vector<int>age;

        for(i=0;i<n;i++)
        {
            scanf("%d", &x);
            age.push_back(x);
        }

        sort(age.begin(), age.end());

        res=age.size();
        for(i=0;i<res;i++)
        {
            if(i!=res-1)
            {
                printf("%d ", age[i]);
            }
            else if(i==res-1)
            {
                printf("%d\n", age[i]);
            }
        }

    }

    return 0;
}
