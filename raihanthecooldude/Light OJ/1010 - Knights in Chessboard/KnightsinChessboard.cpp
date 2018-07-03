#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

#define pi 3.1415927
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
    int t, caseno=1;

    scanf("%d", &t);

    while(caseno<=t)
    {
        int m, n, ans, p, q, x, y;

        scanf("%d %d", &m, &n);

        if(m==1 || n==1)
        {
            if(m>n)
            {
                p=m;
            }
            else
            {
                p=n;
            }

            ans=p;

//            printf("Case %d: %d\n", caseno, ans);
        }
        else if(m==2 || n==2)
        {
            if(m>n)
            {
                p=m;
            }
            else
            {
                p=n;
            }

            x=p;
            y=p%4;

            if(y==3)
            {
                y=1;
            }

            ans=x+y;

//            printf("Case %d: %d\n", caseno, ans);
        }
        else
        {
            ans=(m*n)/2;

            if((m*n)%2==0)
            {
//                cout<<"Case "<<caseno<<": "<<ans<<endl;
//                printf("Case %d: %d\n", caseno, ans);
            }
            else
            {
                ans++;
//                cout<<"Case "<<caseno<<": "<<ans<<endl;
//                printf("Case %d: %d\n", caseno, ans);
            }
        }

        printf("Case %d: %d\n", caseno, ans);

        caseno++;
    }

    return 0;
}
