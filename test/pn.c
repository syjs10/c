#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double n, avg, sum = 0;
	scanf("%lf", &n);
	double *p = (double *)malloc(sizeof(double) * n);
	for (int i = 0; i < n; i++){
		scanf("%lf", &p[i]);
		sum += p[i];
	}
	avg = sum / n;
	//printf("sum = %lf\n", avg);
	for (int i = 0; i < n; i++){
		printf ("%lf \n", pow(p[i]-avg, 2));
	}
	return 0;
}
