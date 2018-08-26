#include<stdio.h>
#include<math.h>

int main()
{
    int n,m;
    scanf("%d %d", &n, &m);

    if ((n==2 && m==3) || (n==3 && m==5) || (n==5 && m==7) || (n==7 && m==11) || (n==11 && m==13) || (n==13 && m==17) || (n==17 && m==19) || (n==19 && m==23) || (n==23 && m==29) || (n==29 && m==31) || (n==31 && m==37) || (n==37 && m==41) || (n==41 && m==43) || (n==43 && m==47) )
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
