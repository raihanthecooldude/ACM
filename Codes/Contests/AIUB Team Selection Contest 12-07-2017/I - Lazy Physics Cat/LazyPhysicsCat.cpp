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

    cin>>t;

    while(t--)
    {
        double l, a, areatri, areacir, ans, x, y;

        scanf("%lf %lf", &l, &a);

        x=(pi*a)/180;

        areatri=(l*l*sin(x))/2;
//        cout<<"t "<<areatri<<endl;

        areacir=pi*l*l;
//        cout<<"c "<<areacir<<endl;

//        if(a<=90 || a>=270)
//        {
//            areacir=areacir/4.0;
//            cout<<"cir4 "<<areatri<<endl;
//        }
//        else
//        {
//            areacir=areacir/2.0;
//            cout<<"cir2 "<<areatri<<endl;
//        }

        y=360/a;
        areacir=areacir/y;

        ans=areacir-areatri;

        printf("%.6lf\n", ans);
    }

    return 0;
}
