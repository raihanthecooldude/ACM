#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d, rp, ip, r1, r2;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf",&a, &b, &c);
    printf ("\n");
    if  (a==0) {
		printf ("This equation will not be aquadratic equation");
    }
    else {
			d = b*b-4*a*c;

			if (d > 0){
				printf ("Roots are real numbers\n\n");
				r1 = (-b+sqrt(d))/(2*a);
				r2 = (-b-sqrt(d))/(2*a);
				printf("Root1 = %.2lf \nRoot2 = %.2lf",r1 , r2);
			}

			else if (d == 0){
				printf ("Roots are equal\n\n");
				r1 = r2 = -b/(2*a);
				printf("Root1 = Root2 = %.2lf", r1);
			}
			else {
				printf ("Roots are complex numbers\n\n");
				rp = -b/2*a;
				ip = sqrt(-d)/2*a;
				printf ("Root1 = %.2lf + %.2lfi \nRoot2 = %.2lf - %.2lfi", rp, ip, rp, ip);
			}
    }
    return 0;
}

