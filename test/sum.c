#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double n, avg, sum = 0;
	scanf("%lf", &n);
	double *x = (double *)malloc(sizeof(double) * n);
	double *y = (double *)malloc(sizeof(double) * n);
	for (int i = 0; i < n; i++){
		scanf("%lf", &x[i]);
	}
	for (int i = 0; i < n; i++){
		scanf("%lf", &y[i]);
	}
	for (int i = 0; i < n; i++){
		printf ("%lf \n", x[i] * y[i]);
	}
	return 0;
}
