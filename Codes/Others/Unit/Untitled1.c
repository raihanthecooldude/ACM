#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
    float a,b,c,d,n,x,y1,y2,y,z1,z2,z;
    printf("Enter your Unit No.");
    scanf ("%f", &n);
    if(n<=75)
    {
        goto a;
    }
    else if (n>75 && n<=200)
    {
        goto b;
    }
    else if (n>200 && n<=300)
    {
        goto c;
    }
    else
    {
        goto d;
    }
    a:
        {
            x=n*3.53;
            printf("Your cost %f taka", x);
            return 0;
        }

    b:
        {
            y1=n-75;
            y2=y1*5.01;
            y=y2+264.75;
            printf("Your cost %f taka", y);
            return 0;
        }

    c:
        {
            z1=n-200;
            z2=z1*5.19;
            z=z2+891;
            printf("Your cost %f taka", z);
            return 0;
        }

    d:
        {
            printf("Babaji Ka Thullu. Baki tuku nije kor..:v");
            return 0;
        }
}
