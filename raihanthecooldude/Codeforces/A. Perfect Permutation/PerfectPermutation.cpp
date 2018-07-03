#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    int i,a[200];
    int n,l;
    l=-1;
    cin>>n;
    if(n%2!=0)
        cout<<l;
    else
        {
            for(i=1;i<=n;i++)
                {
                    if(i%2!=0)
                        a[i]=i+1;
                    else if(i%2==0)
                        a[i]=i-1;
                }
             for(i=1;i<=n;i++)
                {
                    cout<<a[i]<<" ";
                }
        }

    return 0;
}
