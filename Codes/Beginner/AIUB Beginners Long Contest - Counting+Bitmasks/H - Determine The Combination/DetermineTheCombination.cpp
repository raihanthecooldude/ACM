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

int n , r ;
vector<char>ans;
bool taken[107];
char s[107];

void back()
{
    int i;
    if(ans.size() == r )
    {
        for(i = 0 ; i < r ; i++)
        {
            printf("%c",ans[i]);
        }
        puts("");
        return;
    }
    for(i = 0 ; i < n ; i++ )
    {
        if(ans.size() > 0 && ans[ ans.size()-1 ] > s[i] )
        {
            continue;
        }

        if(taken[i] == false)
        {
            taken[i] = true;

            ans.push_back(s[i]);
            back();

            taken[i] = false;
            ans.pop_back();

            while(s[i]==s[i+1] && i+1 < n )
            {
                i++;
            }
        }
    }
}
int main()
{
    while(scanf("%s %d", &s, &r)==2)
    {
        n = strlen(s);

        sort(s,s+n);

        back();
    }
    return 0;
}
