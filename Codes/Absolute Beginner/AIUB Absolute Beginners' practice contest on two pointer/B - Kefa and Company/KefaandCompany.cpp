#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005

int main()
{
    std::vector< pair<int, int> > vec;

    int d, n, i, j, k, l;
    long long count=0, sum=0, high=0;

    cin>>n>>d;

    int m[n], s[n];

    for(k=0;k<n;k++)
    {
        cin>>m[k]>>s[k];

        vec.push_back(make_pair(m[k], s[k]));
    }

    sort(vec.begin(), vec.end());

    for(i=0;i<n;i++)
    {
        m[i]=vec[i].first;
        s[i]=vec[i].second;
    }

    i=0;
    j=0;

    while(j<n && i<=j)
    {
        if(m[j]-m[i] < d)
        {
            count=count+s[j];
            j++;
        }
        else
        {
            if(count>high)
            {
                high=count;
            }

            count=count-s[i];

            i++;
        }
    }

    if(count>high)
    {
        high=count;
    }

    cout<<high<<endl;

  return 0;
}

