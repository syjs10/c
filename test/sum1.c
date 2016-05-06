#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double n, sum = 0;
	scanf("%lf", &n);
	double *p = (double *)malloc(sizeof(double) * n);
	for (int i = 0; i < n; i++){
		scanf("%lf", &p[i]);
		sum += p[i];
	}
	printf("sum = %lf\n", sum);
	return 0;
}
