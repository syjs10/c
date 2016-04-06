#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double n, avg, sum = 0;
	scanf("%lf", &n);
	double *y = (double *)malloc(sizeof(double) * n);
	double *p = (double *)malloc(sizeof(double) * n);
	for (int i = 0; i < n; i++){
		scanf("%lf", &y[i]);
	}
	for (int i = 0; i < n; i++){
		p[i] = log(y[i]);
		sum += p[i];
	}
	avg = sum / n;
	//printf("avg = %lf\n", sum);
	//for (int i = 0; i < n; i++){
	//	printf ("%2d: %lf \n", i + 1, p[i]);
	//}
	for (int i = 0; i < n; i++){
		printf ("%lf \n", p[i]-avg);
	}
	return 0;
}
