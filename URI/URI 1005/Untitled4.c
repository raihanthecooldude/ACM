#include<stdio.h>

int main ()
{
    double A1, B1, A, B, avg, MEDIA;

    scanf("%lf %lf", &A, &B);
    MEDIA = ((A*3.5)+(B*7.5))/(3.5+7.5);
    printf("MEDIA = %.5lf", MEDIA);
    printf("\n");

    return 0;
}


