#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005

void check(char S[], int index);

int main()
{
    char S[600];

    scanf("%s", S);
    check(S, 0);

    return 0;
}

void check(char S[], int index)
{
    int len = strlen(S) - (index + 1);
    if (S[index] == S[len])
    {
        if (index + 1 == len || index == len)
        {
            printf("YES\n");
            return;
        }
        check(S, index + 1);
    }
    else
    {
        printf("NO\n");
    }
}
