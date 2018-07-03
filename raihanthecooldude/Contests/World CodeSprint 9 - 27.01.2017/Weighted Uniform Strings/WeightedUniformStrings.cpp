#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int n, b[26]={0}, i, x;
    char s[100000];

    for(i=0;i!='\n';i++)
    {
        scanf("%c", &s[i]);
        printf("%c", s[i]);
    }
//    scanf("%d", &n);
//
//    for(i=0;i!='\0';i++)
//    {
//        x=s[i];
//        b[x-64]++;
//        printf("%c", s[i]);
//    }

    return 0;
}
