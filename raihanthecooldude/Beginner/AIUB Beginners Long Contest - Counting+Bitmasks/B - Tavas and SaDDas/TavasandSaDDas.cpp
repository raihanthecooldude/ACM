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
    int n, t=0, p=1, q=2;;

    cin>>n;

    while(n>0)
    {
        if(n%10==4)
        {
            t=t+p;
        }
        else if(n%10==7)
        {
            t=t+q;
        }

        p=2*p;
        q=2*q;
        n=n/10;
    }

    cout<<t<<endl;

    return 0;
}
