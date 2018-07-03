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
    int t;

//    cin>>t;
    scanf("%d", &t);

    while(t--)
    {
        int c, n, i, count=0, j;
        double sum=0, b;
        string a[10];
        map<string,double>m;

//        cin>>c>>n;
        scanf("%d %d", &c, &n);

        for(i=0;i<c;i++)
        {
//            cin>>a>>b;
            for(j=0;j!=' ';j++)
            {
                scanf("%c", a[i]);
            }

            scanf("%lld", &b);

            m[a]=b;
        }

        for(i=0;i<n;i++)
        {
//            cin>>b>>a;
            scanf("%lld", &b);

            for(j=0;j!=' ';j++)
            {
                scanf("%c", a[i]);
            }


//            if(count==0)
//            {
//                if(a=="JD")
//                {
//                    sum=0;
//                    cout<<sum<<endl;
//                }
//                else
//                {
//                    sum=1;
//                    cout<<sum<<endl;
//                }
//                count++;
//            }

            if(a=="JD")
            {
                sum=sum+b;
//                cout<<"j "<<sum<<endl;
            }
            else
            {
                sum=sum+(m[a]*b);
//                cout<<"multi "<<sum<<endl;
            }
        }

        printf("%.6lf\n", sum);
    }

    return 0;
}
