#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    int fh,fm,sh,sm,x,y,z;
    printf("Enter First Time :");
    scanf("%d %d", &fh, &fm);
    printf("Enter Second Time :");
    scanf("%d %d", &sh, &sm);
    x=(fh*60)+fm;
    y=(sh*60)+sm;
    z=y-x;
    printf("First Time: %d %d \n Second Time: %d %d \n Difference: %d minutes",fh,fm,sh,sm,z);
    return 0;
}
