#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        char a[MAX];
        int i, c=0, z, s;

        scanf("%s", a);

        s=strlen(a);

        for(i=0;i<s;i++)
        {
            if(a[i]=='<')
            {
                c++;
            }
            else if(a[i]=='>')
            {
                c--;
            }
        }

        z=s-c;
//        cout<<s;
        printf("%d\n", z);
    }



  return 0;
}
