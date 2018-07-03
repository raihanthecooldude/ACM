#include<stdio.h>
#include<math.h>

int main()
{
    int T;
    scanf("%d", &T);

    int n, x1, x2;

    while (T>0)
    {
        scanf("%d", &n);

        x1=n/2;
        x2=n-x1;

        printf("%d %d\n", x1, x2);
        T--;
    }

    return 0;
}

