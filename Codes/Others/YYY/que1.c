#include<stdio.h>
int main ()
{
	int i, j,  a[3][3], b[3][3], add[3][3], sub[3][3], sq[3][3];

	for (i= 0; i<3; i++) {
		for (j=0; j<3; j++){
			scanf ("%d", &a[i][j]);
		}
	}
	for (i= 0; i<3; i++) {
		for (j=0; j<3; j++){
			scanf ("%d", &b[i][j]);
		}
	}
	for (i= 0; i<3; i++) {
		for (j=0; j<3; j++){
			add[i][j] = a[i][j] + b[i][j];
		}
	}
	printf ("Addition:\n");
	for (i= 0; i<3; i++) {
		for (j=0; j<3; j++){
			printf ("%d\t", add[i][j]);
		}
		printf ("\n");
	}

	for (i= 0; i<3; i++) {
		for (j=0; j<3; j++){
			sub[i][j] = a[i][j] - b[i][j];
		}
	}
	printf ("Subtraction:\n");
	for (i= 0; i<3; i++) {
		for (j=0; j<3; j++){
			printf ("%d\t", sub[i][j]);
		}
		printf ("\n");
	}
for (i= 0; i<3; i++) {
		for (j=0; j<3; j++){
			sq[i][j] = a[i][j]*a[i][j] + b[i][j]*b[i][j];
		}
	}
	printf ("Addition of squars:\n");
	for (i= 0; i<3; i++) {
		for (j=0; j<3; j++){
			printf ("%d\t", sq[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
