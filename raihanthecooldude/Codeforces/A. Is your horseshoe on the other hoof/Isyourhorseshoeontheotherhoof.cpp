#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int s1, s2, s3, s4, i, j, a[4], c=1, b[4][4]={0};

    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);

    if(s1!=s2 && s1!=s3 && s1!=s4)
    {
        c++;
    }

    if(s2!=s3 && s2!=s4)
    {
        c++;
    }

    if(s3!=s4)
    {
        c++;
    }

    c=4-c;

    printf("%d\n", c);

    return 0;
}
