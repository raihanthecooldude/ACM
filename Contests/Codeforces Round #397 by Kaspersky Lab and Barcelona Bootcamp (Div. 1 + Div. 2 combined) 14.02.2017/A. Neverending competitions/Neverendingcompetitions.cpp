#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005

int main()
{
    int n, i=0;
    string s;

    scanf("%d", &n);

    while(i<=n)
    {
        cin>>s;
        i++;
    }

    if(n%2==0)
    {
        printf("home\n");
    }
    else
    {
        printf("contest\n");
    }



  return 0;
}
