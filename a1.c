#include <stdio.h>
int main()
{
	double a, b, c;
	scanf ("%lf%lf%lf", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a){
		if (a == b && b == c){
			printf ("等腰三角形\n");
		}else{
			printf ("不是等腰三角形\n");
		}
	}else{
		printf ("不构成三角形\n");
	}
	return 0;
}
