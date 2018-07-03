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

int main()
{
    int R;

    cin>>R;

    while(R--)
    {
        int L, i, count=0;
        string str;

        cin>>L;
        cin>>str;

        for(i=0;i<L;i++)
        {
            if(count==0 && str[i]=='H')
            {
                count++;
            }
            else if(count==1 && str[i]=='T')
            {
                count--;
            }
            else if(count==0 && str[i]=='T')
            {
                count=100;
                break;
            }
            else if(count==1 && str[i]=='H')
            {
                count=100;
                break;
            }
        }

        if(count>0)
        {
            printf("Invalid\n");
        }
        else
        {
            printf("Valid\n");
        }
    }

    return 0;
}
