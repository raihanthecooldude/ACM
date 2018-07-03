#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int n,t,i=0,j,k=1;
    scanf("%d %d", &n, &t);

    char a[n];
    scanf("%s", a);

    while(i<t)
    {
        while(k<n)
        {
            if (a[k-1]=='B' && a[k]=='G')
            {
                a[k-1]='G';
                a[k]='B';
                k=k+2;
            }
            else
            {
                k++;
            }
        }
        i++;
        k=1;
    }

    printf("%s", a);

    return 0;
}
