#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q, i, j;
    char p[10]={'h','a','c','k','e','r','r','a','n','k'};

    cin>>q;

    while(q--)
    {
        j=0;
        char s[10000];
        int c;

        cin>>s;

        c=strlen(s);

        for(i=0;i<c;i++)
        {
            if(s[i]==p[j])
            {
                j++;
            }
        }

        if(j==10)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
