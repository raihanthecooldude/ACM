#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, i=1;

    cin>>T;

    while(i<=T)
    {
        int N, M, U, V, c=0, j, a[100000]={0}, b[100000]={0};

        cin>>N>>M;

        for(j=1;j<=M;j++)
        {
            cin>>U>>V;

            a[U]++;
            b[V]++;
        }

        for(j=1;j<=M;j++)
        {
            if(a[j]!=0 && b[j]==0)
            {
                c++;
            }
        }

        cout<<"Case "<<i<<": "<<c<<endl;
    }
    return 0;
}
