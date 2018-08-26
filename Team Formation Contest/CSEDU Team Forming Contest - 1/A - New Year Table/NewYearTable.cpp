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

    //int n, R, r;
    double yolo, n, R, r;

    //cout<<pi<<endl;

    scanf("%lf %lf %lf", &n, &R, &r);

    yolo=asin(r/(R-r))*n;
    //cout<<yolo<<endl;
    if((n==1 && r<=R) || (n==2 && r*2<=R) || (yolo<=3.1415927))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }


    return 0;
}
