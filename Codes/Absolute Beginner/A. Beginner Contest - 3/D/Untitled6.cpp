#include<iostream>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    char s[100],t[100],b[100];

    gets(s);
    gets(t);

    int j=0;
    int s1=strlen(s);
    int t2=strlen(t);

    for(int i=t2-1;i>=0;i--,j++)
    {
        t[j]=b[i];
    }

    int x=1;
    for(int m=0;m<t2&&m<s1;m++)
    {
        if(s[m]!=b[m])
        {
            x=0;
            break;
        }
    }

    if(x=1)
    {
        cout<<"YES"<<endl;
    }
    else if (x=0)
    {
        cout<<"NO"<<endl;
    }


    return 0;
}
