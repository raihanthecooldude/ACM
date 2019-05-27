#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    string a[1007], b[1007];

    cin>>a[0]>>b[0];

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }

    for(i=1;i<=n;i++)
    {
        if(a[i]==a[i-1])
        {
            a[i]=b[i-1];
        }
        else if(a[i]==b[i-1])
        {
            a[i]=a[i-1];
        }
        else if(b[i]==a[i-1])
        {
            b[i]=b[i-1];
        }
        else if(b[i]==b[i-1])
        {
            b[i]=a[i-1];
        }
    }

    for(i=0;i<=n;i++)
    {
        cout<<a[i]<<" "<<b[i]<<endl;
    }

    return 0;
}
