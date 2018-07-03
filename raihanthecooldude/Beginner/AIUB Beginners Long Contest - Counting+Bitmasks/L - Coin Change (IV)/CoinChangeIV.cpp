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

void powerset(vector<int> &a, int i, long long acc, vector<long long> &ans)
{
    ans.push_back(acc);
    if (i < a.size())
    {
        powerset(a, i + 1, acc, ans);
        powerset(a, i + 1, acc + a[i], ans);
        powerset(a, i + 1, acc + a[i] + a[i], ans);
    }
}


void solve()
{


    return;
}

int main()
{
    int T, i=1;
    cin >> T;

    while (i<=T)
    {
        printf("Case %d: ", i);

        int n, t, count=0, j;
        long long w;
        cin >> n >> w;
        vector<int> a, b;
        for (j = 0; j < n; j++)
        {
            cin >> t;
            if (j & 1)
            {
                a.push_back(t);
            }
            else
            {
                b.push_back(t);
            }
        }

        vector<long long> sa, sb;

        powerset(a, 0, 0, sa);
        powerset(b, 0, 0, sb);
        // sort(sa.begin(), sa.end());
        sort(sb.begin(), sb.end());

        for (int i = 0; i < sa.size(); i++)
        {
            long long t = w - sa[i];
            if (binary_search(sb.begin(), sb.end(), t))
            {
                puts("Yes");
                count=1;
                break;
            }
        }

        if(count==0)
        {
            puts("No");
        }

        i++;
    }

    return 0;
}
