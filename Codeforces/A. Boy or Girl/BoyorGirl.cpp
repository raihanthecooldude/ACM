#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int i, j, c=0, l;
    char n[100];

    scanf("%s", n);

    l=strlen(n);
    for(i=0;i<l;i++)
    {
        for(j=0;j<i;j++)
        {
            if(n[i]==n[j])
            {
                break;
            }
        }

        if(i==j)
        {
            c++;
        }
    }

    if(c%2==1)
    {
        printf("IGNORE HIM!\n");
    }
    else
    {
        printf("CHAT WITH HER!\n");
    }

    return 0;
}
