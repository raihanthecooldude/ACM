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
    ll t, size, i;

    cin>>t;
    getchar();

    while(t--)
    {
        string s;
        getline(cin,s);
        size=s.size();
        int count=0;

        if(size%2!=0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            stack<char>yolo;

            for(i=0;i<size;i++)
            {
                if(s[i]=='(' || s[i]=='[')
                {
                    yolo.push(s[i]);
                }
                else if(s[i]==')')
                {
                    if(yolo.size() && yolo.top()=='(')
                    {
                        yolo.pop();
                    }
                    else
                    {
                        count=1;
                        break;
                    }
                }
                else if(s[i]==']')
                {
                    if(yolo.size() && yolo.top()=='[')
                    {
                        yolo.pop();
                    }
                    else
                    {
                        count=1;
                        break;
                    }
                }
            }

            if(yolo.empty() && count==0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }

    }

    return 0;
}
