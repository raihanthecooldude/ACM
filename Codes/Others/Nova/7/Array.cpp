#include<stdio.h>

int find(char arr[], char c)
{
    int j, x=0;

    for(j=0;j!='\n';j++)
    {
        if(arr[j]==c)
        {
            x=1;
        }
    }

    if(x==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char a[1000], n;
    int i, z, q;

    printf("Enter how many characters will be in your Word\n");
    scanf("%d", &q);

    for(i=0;i<=q+1;i++)
    {
        scanf("%c", &a[i]);
    }

    scanf("%c", &n);

    z=find(a,n);

    if(z==1)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }

    return 0;
}
