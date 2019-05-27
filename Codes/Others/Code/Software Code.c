#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    int a,c;
    printf ("Solve This Problem: 2+3=?");
    scanf ("%d", &a);
    if (a==5)
    {
        goto x;
    }
    else
    {
        goto y;
    }
    x:
        {
            printf ("(2*3)+7=?");
            scanf ("%d", &a);
            if (a==13)
            {
                goto u;
            }
            else
            {
                goto v;
            }
        }
return 0;
    y:
       {
            printf ("2+7=?");
            scanf ("%d",&a);
            if (a==9)
            {
                goto w;
            }
            else
            {
                goto z;
            }
        }
return 0;
    u:
        {
            printf ("(25/5)+7=?");
            scanf ("%d", &a);
            if (a==12)
            {
                printf ("Your IQ is 10.");
            }
            else
            {
                printf ("Your IQ is 8.");
            }
        }
return 0;
    v:
        {
            printf ("2*7=?");
            scanf ("%d", &a);
            if (a==14)
            {
                printf ("Your IQ is 7.");
            }
            else
            {
                printf ("Your IQ is 5.");
            }
        }
return 0;
    w:
        {
            printf ("3+7=?");
            scanf ("%d", &a);
            if (a==10)
            {
                printf ("Your IQ is 3.");
            }
            else
            {
                printf ("Your IQ is 2.");
            }
        }
return 0;
    z:
        {
            printf ("2*3=?");
            scanf ("%d", &a);
            if (a==6)
            {
                printf ("Your IQ is 1.");
            }
            else
            {
                printf ("Your IQ is 0.");
            }
        }
return 0;
}
