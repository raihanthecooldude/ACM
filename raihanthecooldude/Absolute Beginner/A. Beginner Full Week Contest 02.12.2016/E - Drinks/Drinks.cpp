#include<stdio.h>
#include<math.h>

int main()
{
    int n,i;
    scanf("%d", &n);

    double x=0.0, avg, p[n];
    for (i=0;i<n;i++)
    {
        scanf("%lf", &p[i]);
        x=x+p[i];
    }

    avg=x/n;

    printf("%.12lf", avg);

    return 0;
}
