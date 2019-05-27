#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#define pi 3.1416
int main()
{


    int deg;
    float rad,x,y,z;
    printf("Enter degree\n");
    scanf("%d", &deg);
    rad=(pi*deg)/180;
    x= sin(rad);
    y= cos(rad);
    z= tan(rad);
    system("cls");
    printf("radian= %.3f\n", rad);
    printf("sin %d= %.3f\n", deg, x);
    printf("cos %d= %.3f\n", deg, y);
    printf("tan %d= %.3f\n", deg, z);
    return 0;
}

