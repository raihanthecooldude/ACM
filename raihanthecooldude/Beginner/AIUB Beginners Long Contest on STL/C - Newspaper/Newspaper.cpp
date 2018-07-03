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
    int i,j,N,M,t,K,c=0;
    double z;
    scanf("%d", &N);
    while(N--)
    {
        int a[256]={0},b[266]={0};
        scanf("%d", &m);
        char x;
        string s,y;
        cin.ignore();
        for(i=1;i<=m;i++)
        {
            cin>>x;
            cin>>n;
            a[x]=n;
            cin.ignore();
            j=x;
        }
        scanf("%d", &m);
        getline(cin,s);

        for(i=0;i<m;i++)
        {
            getline(cin,s);
            for(j=0;j<s.size();j++)
            {
                b[s[j]]++;
            }
        }

        c=0;

        for(i=0;i<=255;i++)
        {
            if(a[i])
            {
                c=c+(b[i]*a[i]);
            }
        }

        z=double(c)/double(100);

        scanf("%.2lf$\n", z);
    }

    return 0;
}
