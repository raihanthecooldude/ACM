#include<stdio.h>

int main()
{
    int n, g, l;

    printf("enter how many times you want to convert\n");
    scanf("%d", &n);

    do
    {
        scanf("%d", &g);
        l=g*3;
        printf("%d\n", l);

        n--;
    } while (n>0);

    return 0;
}
