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

    int n;

    while(cin>>n)
    {
        if(n==0)
        {
            return 0;
        }
        else
        {
            int a[n], count=0, i, j, jodu=0, modu=0, k, sum;

            for(i=0;i<n;i++)
            {
                cin>>a[i];
            }

            for(i=0,j=n-1;i<j;)
            {
                if(a[i]>a[j] && count==0)
                {
                    count=0;
                    k=i;
                    i++;
                }
                else if(a[i]<a[j] && count==0)
                {
                    count=1;
                    k=j;
                    j--;
                }
                else if(a[i]>a[j] && count==1)
                {
                    count=0;
                    k=i;
                    i++;
                }
                else if(a[i]<a[j] && count==1)
                {
                    count=1;
                    k=j;
                    j--;
                }

                if(count==0)
                {
                    jodu=jodu+a[k];
                }
                else
                {
                    modu=modu+a[k];
                }
            }

            if(count==1)
            {
                jodu=jodu+a[k];
            }
            else
            {
                modu=modu+a[k];
            }

            sum=abs(jodu-modu);

            cout<<sum<<endl;

        }

    }


    return 0;
}
