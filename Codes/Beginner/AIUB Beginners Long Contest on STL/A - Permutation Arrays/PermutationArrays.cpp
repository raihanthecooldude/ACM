#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005
#define UMAX 9223372036854775807
#define MAXARRAY 2000002
typedef long long ll;
typedef stringstream ss;

vector<int>first;
vector<string>second;
vector< pair<int, string> >result;

int main()
{
    int test, ind;

    scanf("%d",&test);

    string s, t, str;
    getchar();

    while(test--)
    {
        getchar();

        getline(cin,s);
        ss ssu(s);

        while(ssu>>ind)
        {
            first.push_back(ind);
        }

        getline(cin,str);

        ss sst(str);

        while(sst>>t)
        {
            second.push_back(t);
        }

        int size = min(first.size(), second.size());

        for(int i=0; i<size; i++)
        {
            result.push_back(make_pair(first[i],second[i]));
        }

        sort(result.begin(), result.end());

        for(int i=0; i<size; i++)
        {
            cout<<result[i].second<<endl;
        }

        first.clear();
        second.clear();
        result.clear();

        if(test)
        {
            printf("\n");
        }
    }
    return 0;
}
