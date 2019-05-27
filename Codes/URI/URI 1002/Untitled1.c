#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main ()
{
    double R,A;
    scanf("%lf", &R);
    A=pi*R*R;
    printf("A=%.4lf", A);
    printf("\n");

    return 0;
}
