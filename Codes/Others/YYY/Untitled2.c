#include <stdio.h>
int main ()
{
	int i, j, a[3][3], b[3][3], sum=0,sq=0;

	for (i= 0; i<3; i++) {
		for (j=0; j<3; j++){
			scanf ("%d", &a[i][j]);
		}
	}
	for (i= 0; i<3; i++) {
		for (j=0; j<3; j++){
			if (i==j) {
				sum = sum + a[i][j];
			}
		}
	}
	printf ("Summation of diagonal elements:\n");
	printf ("%d", sum);
	printf ("\n");
	printf ("\n");
	for (i= 0; i<3; i++) {
		for (j=0; j<3; j++){
			if (i==j) {
				sq = sq + a[i][j]*a[i][j];
			}
		}
	}
	printf ("Summation of squares diagonal elements:\n");
	printf ("%d", sq);
	printf ("\n");
	printf ("\n");

	for (i= 0; i<3; i++) {
		for (j=0; j<3; j++){
			b[j][i] = a[i][j];
		}
	}

	printf ("Transpose of the matrix:\n");

	for (i= 0; i<3; i++) {
		for (j=0; j<3; j++){
			printf ("%d\t", b[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
