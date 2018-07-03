#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y, c;

    scanf("%d", &y);

    if(y>1918)
    {
        if ( y%400 == 0)
        {
            c=1;
        }
        else if ( y%100 == 0)
        {
            c=0;
        }
        else if ( y%4 == 0 )
        {
            c=1;
        }
        else
        {
            c=0;
        }
    }
    else if(y<1918)
    {
        if(y%4==0)
        {
            c=1;
        }
    }
    else if(y==1918)
    {
        c=2;
    }

    if(c==0)
    {
        cout<<"13.09."<<y<<endl;
    }
    else if(c==1)
    {
        cout<<"12.09."<<y<<endl;
    }
    else if(c==2)
    {
        cout<<"26.09."<<y<<endl;
    }

        return 0;
}
