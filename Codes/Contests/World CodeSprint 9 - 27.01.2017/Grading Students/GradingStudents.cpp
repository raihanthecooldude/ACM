#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    int grade[n], i;

    for(i=0;i<n;i++)
    {
        scanf("%d", &grade[i]);

        if(grade[i]>37)
        {
            if((grade[i]+2)%5==0)
            {
                grade[i]++;
                grade[i]++;

                printf("%d\n", grade[i]);
            }
            else if((grade[i]+1)%5==0)
            {
                grade[i]++;

                printf("%d\n", grade[i]);
            }
            else
            {
                printf("%d\n", grade[i]);
            }
        }
        else
        {
            printf("%d\n", grade[i]);
        }
    }

    return 0;
}
