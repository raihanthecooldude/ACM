#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005
#define UMAX 9223372036854775807
#define MAXARRAY 2000002
typedef long long ll;

int main()
{
    int n=3, i, count=1, yolo;

    while(count!=10001)
    {
        yolo=0;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                yolo++;
            }
        }

        n++;

        if(yolo==0)
        {
            cout<<"Prime "<<n-1<<endl;
            count++;
        }
    }

    n--;
    cout<<n<<endl;


    return 0;
}
